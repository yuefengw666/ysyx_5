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


    //postion elf header
    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
    
    fseek(fp, 0 , SEEK_SET);
    int ret_rd_ehdr = fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
    Assert(ret_rd_ehdr != 0, "ELF header read error!\n");

    //postion elf section header
    Elf64_Shdr *shdr = NULL;
    fseek(fp, ehdr->e_shoff, SEEK_SET);    //Elf64_Ehdr->e_shoff: offset of elf section header
    int ret_rd_eshrd = fread(shdr, sizeof(Elf64_Shdr), ehdr->e_shnum, fp);
    Assert(ret_rd_eshrd != 0, "ELF section header read error");

    //postion .symtab
    //postion .strtab
    Elf64_Shdr *shdr_symtab = NULL;
    Elf64_Shdr *shdr_strtab = NULL;

    int i = 0;
    while( (shdr_symtab == NULL || shdr_strtab == NULL) && (i < ehdr->e_shnum) ){
        
        if(shdr[i].sh_type == SHT_SYMTAB){
            shdr_symtab = &shdr[i];
            printf("judge section header type == SYMTAB\n");
        }
        else if(shdr[i].sh_type == SHT_STRTAB){
            shdr_strtab = &shdr[i];
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
    fseek(fp, shdr_symtab->sh_offset, 0);
    Elf64_Sym *sym = NULL;
    int ret_rd_sym = fread(sym, shdr_strtab->sh_size, 1, fp);
    Assert(ret_rd_sym != 0, "ELF sym read error");
    
    //shdr->sh_entsize:
    /*Some sections hold a table of fixed-sized entries, such as a symbol table.  For such  a  
           section,  this  member gives the size in bytes for each entry.  
           This member contains zero if the section does not hold a table of fixed-size entries.*/
    int num_sym = shdr_symtab->sh_size / shdr_symtab->sh_entsize; //
    printf("num_sym:%d\n",num_sym);
    int j = 0;
    while(j < num_sym){
        if(ELF64_ST_TYPE(sym[j].st_info) == STT_FUNC){
            elf_func_info[cnt_trace_func].name = (char *)(sym + sym[j].st_name);
            elf_func_info[cnt_trace_func].addr = sym[j].st_value;
            elf_func_info[cnt_trace_func].size = sym[j].st_size;
            printf("111\n");
            printf("elf_func_info has %s\n",elf_func_info[j].name);
            cnt_trace_func++;
        }
        j++;
    }

    for(int i=0; i<cnt_trace_func; i++){
        printf("elf_func_info has:%s\n",elf_func_info[i].name);
    }
    
    return;
}

#define FRB_SIZE 100
#define FRB_LENGTH 256
static char ftrace_ringbuf[FRB_SIZE][FRB_LENGTH];
static int cnt_ftrace = 0;
static int func_dep = 0;//display blank
static char blank[100]= {0};

void ftrace(vaddr_t pc, vaddr_t dnpc, int pc_inst_opcode){
    int pc_func = -1;
    int dnpc_func = -1;
    
    for(int i=0; i<cnt_trace_func; i++){
        printf("elf_funcs:%s\n",elf_func_info[i].name);
        if( (pc >= elf_func_info[i].addr) && (pc < elf_func_info[i].addr + elf_func_info[i].size) ){
            pc_func = i;
        }
        if( (dnpc >= elf_func_info[i].addr) && (dnpc < elf_func_info[i].addr + elf_func_info[i].size) ){
            dnpc_func = i;
        }
    }

    for(int i=0; i<func_dep; i++){
        blank[i] = ' ';        
    }
    //judge whether call or ret
    if(dnpc_func != pc_func){//happened to jump
        printf("enter ftrace sprintf?\n");
        //call
        if( (pc_inst_opcode == 0x6f) && (dnpc == elf_func_info[dnpc_func].addr) ){
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE], "%lx: call [%s@%lx]", pc, elf_func_info[dnpc_func].name, elf_func_info[dnpc_func].addr);
            cnt_ftrace++;
            func_dep ++;
            printf("in call\n");
        }
        //ret
        else if(pc_inst_opcode == 0x67){
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE],"%lx: ret [%s]", pc, elf_func_info[dnpc_func].name);
            cnt_ftrace++;
            func_dep--;
            printf("in ret\n");
        }
    }

    return;
}

void ftrace_display(){
    printf("%s\n",ASNI_FMT("Ftrace ...",ASNI_FG_CYAN));
    if(cnt_ftrace <= FRB_SIZE){
        for(int i=0; i<cnt_ftrace; i++){
            printf(" %s\n",ftrace_ringbuf[i]);
        }
    }
    else{
        for(int i=0; i<FRB_SIZE; i++){
            if(i == (cnt_ftrace % FRB_SIZE))
                printf(">%s\n",ftrace_ringbuf[FRB_SIZE]);
            else 
                printf(" %s\n",ftrace_ringbuf[i]);
        }
    }
}