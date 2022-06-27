#include "common.h"
#include "elf.h"
#include "utils.h"

#define max_num_func 5000

typedef struct{
    char *name;
    vaddr_t addr;
    uint64_t size;
    
} ELF_Func_Info;


ELF_Func_Info elf_func_info[max_num_func];
int cnt_trace_func = 0;

void init_elf(const char *elf_file){
    if(elf_file == NULL){
        Log("No elf file is given.\n");
        return;
    }
    
    FILE *fp = fopen(elf_file, "rb");
    Assert(fp, "Can not open %s'", elf_file);

    printf("can open elf file\n");

    //postion elf header
    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
    
    fseek(fp, 0 , SEEK_SET);
    int ret_rd_ehdr = fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
    Assert(ret_rd_ehdr != 0, "ELF header read error!\n");
    
    printf("can read elf header \n");
    printf("number section headers:%d\n",ehdr->e_shnum);
    
    //postion elf section header
    Elf64_Shdr shdr[999];///******can not define NULL
    fseek(fp, ehdr->e_shoff, SEEK_SET);    //Elf64_Ehdr->e_shoff: offset of elf section header
    int ret_rd_eshrd = fread(shdr, sizeof(Elf64_Shdr), ehdr->e_shnum, fp);
    Assert(ret_rd_eshrd != 0, "ELF section header read error");
    
    printf("can read elf section header \n");
    
    //postion .symtab
    //postion .strtab
    Elf64_Shdr *shdr_symtab = NULL;
    Elf64_Shdr *shdr_strtab = NULL;
    int i = 0;
    while( (shdr_symtab == NULL || shdr_strtab == NULL) && (i < ehdr->e_shnum) ){
        
        if(shdr[i].sh_type == SHT_SYMTAB){
            shdr_symtab = &shdr[i];
            printf("%s\n",(char *)shdr_symtab);
            printf("symtab offset:%lx\n",shdr[i].sh_offset);
            printf("judge section header type == SYMTAB\n");
        }
        else if(shdr[i].sh_type == SHT_STRTAB){
            shdr_strtab = &shdr[i];
            printf("strtab offset:%lx\n",shdr[i].sh_offset);
            printf("judge section header type == SYMTAB\n");
        }
        i++;
    }
    
    //find func and its name
    //func name offset : shdr_strtab->shoffset + sym[i].st_name
    //sym->st_name:
    /*st_name
              This  member holds an index into the object file's symbol string table, which holds character
              representations of the symbol names.  If the value is nonzero, it represents a  string  table
              index that gives the symbol name.  Otherwise, the symbol has no name.*/
    fseek(fp, shdr[6].sh_offset, SEEK_SET);
    Elf64_Sym sym[999];
    int ret_rd_sym = fread(sym, 1, shdr[6].sh_size, fp);
    Assert(ret_rd_sym != 0, "ELF sym read error");
    
    printf("can read symtable\n");

    //postion strtable
    char strtable[999];
    fseek(fp, shdr[7].sh_offset, SEEK_SET);
    int ret_rd_str = fread(strtable,1,shdr[7].sh_size, fp);
    Assert(ret_rd_str != 0, "ELF str read error");
    
    printf("can read strtable\n");
    //shdr->sh_entsize:
    /*Some sections hold a table of fixed-sized entries, such as a symbol table.  For such  a  
           section,  this  member gives the size in bytes for each entry.  
           This member contains zero if the section does not hold a table of fixed-size entries.*/
    int num_sym = shdr[6].sh_size / shdr[6].sh_entsize; //
    printf("num_sym:%d\n",num_sym);
    int j = 0;
    while(j < num_sym){
        if(ELF64_ST_TYPE(sym[j].st_info) == STT_FUNC){
            //elf_func_info[cnt_trace_func].name = (char *)(shdr[7].sh_offset + sym[j].st_name);
            elf_func_info[cnt_trace_func].name = strtable + sym[j].st_name;
            elf_func_info[cnt_trace_func].addr = sym[j].st_value;
            elf_func_info[cnt_trace_func].size = sym[j].st_size;
            cnt_trace_func++;
        }
        j++;
    }

    for(int i=0; i<cnt_trace_func; i++){
        printf("func name :%s, addr:%lx, size:%ld\n",elf_func_info[i].name, elf_func_info[i].addr,elf_func_info[i].size);
    }
    
    return;
}

#define FRB_SIZE 1000
#define FRB_LENGTH 1024
static char ftrace_ringbuf[FRB_SIZE][FRB_LENGTH];
static int cnt_ftrace = 0;
static int func_dep = 0;//display blank
static char blank[100]= {0};

void ftrace(vaddr_t pc, vaddr_t dnpc, int pc_inst_opcode){
    int pc_func_index = -1;
    int dnpc_func_index = -1;
    //printf("trace func number: %d\n", cnt_trace_func);
    //printf("pc:%lx, dnpc:%lx, inst_opcode:%x\n",pc, dnpc, pc_inst_opcode);
    
    for(int i=0; i<cnt_trace_func; i++){
        if( (pc >= elf_func_info[i].addr) && (pc < (elf_func_info[i].addr + elf_func_info[i].size) ) ){
            pc_func_index = i;
        }
        if( (dnpc >= elf_func_info[i].addr) && (dnpc < (elf_func_info[i].addr + elf_func_info[i].size))){
            dnpc_func_index = i;
        }
    }

    for(int i=0; i<func_dep; i++){
        blank[i] = ' ';        
    }
    //judge whether call or ret
    if(dnpc_func_index != pc_func_index){//happened to jump
        //call
        if( (pc_inst_opcode == 0x6f) && (dnpc == elf_func_info[dnpc_func_index].addr) ){
            printf("dnpc_func_index:%d\n",dnpc_func_index);
            printf("call func: %s\n",elf_func_info[dnpc_func_index].name);
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE], "%lx: %scall [%s'-'%lx]", pc, blank, elf_func_info[dnpc_func_index].name, elf_func_info[dnpc_func_index].addr);
            cnt_ftrace++;
            func_dep ++;
            //printf("in call\n");
        }
        //ret
        else if(pc_inst_opcode == 0x67){
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE],"%lx: %sret [%s]", pc, blank, elf_func_info[dnpc_func_index].name);
            cnt_ftrace++;
            func_dep--;
            //printf("in ret\n");
        }
    }

    return;
}

void ftrace_display(){
    printf("%s\n",ASNI_FMT("Ftrace ...",ASNI_FG_CYAN));
    /*
    if(cnt_ftrace <= FRB_SIZE){
        for(int i=0; i<cnt_ftrace; i++){
            printf(" %s\n",ftrace_ringbuf[i]);
        }
    }
    else{
        for(int i=0; i<FRB_SIZE; i++){
            if(i == (cnt_ftrace % FRB_SIZE))
                printf(">%s\n",ftrace_ringbuf[i]);
            else 
                printf(" %s\n",ftrace_ringbuf[i]);
        }
    }
    */
}