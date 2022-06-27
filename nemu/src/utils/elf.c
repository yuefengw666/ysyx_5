#include "common.h"
#include "elf.h"
#include "utils.h"

#define max_num_func 5000

typedef struct{
    char *name;
    vaddr_t addr;
    uint64_t size;
    
} ELF_Func_Info;


static ELF_Func_Info elf_func_info[max_num_func];
int cnt_trace_func = 0;

Elf64_Ehdr *ehdr = NULL;
Elf64_Shdr shdr[999];///******can not define NULL
Elf64_Sym symtab[999];
char strtab[999];

void init_elf(const char *elf_file){
    if(elf_file == NULL){
        Log("No elf file is given.\n");
        return;
    }
    
    FILE *fp = fopen(elf_file, "rb");
    Assert(fp, "Can not open %s'", elf_file);

    printf("can open elf file\n");

    //postion elf header
    ehdr = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
    
    fseek(fp, 0 , SEEK_SET);
    int ret_rd_ehdr = fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
    Assert(ret_rd_ehdr != 0, "ELF header read error!\n");
    
    //printf("can read elf header \n");
    //printf("number section headers:%d\n",ehdr->e_shnum);
    
    //postion elf section header
    //Elf64_Shdr shdr[999];///******can not define NULL
    fseek(fp, ehdr->e_shoff, SEEK_SET);    //Elf64_Ehdr->e_shoff: offset of elf section header
    int ret_rd_eshrd = fread(shdr, sizeof(Elf64_Shdr), ehdr->e_shnum, fp);
    Assert(ret_rd_eshrd != 0, "ELF section header read error");
    
    
    //find .symtab and .strtab index in shdr
    int symtab_idx = -1;
    int strtab_idx = -1;
    for(int i=0; i<ehdr->e_shnum; i++){
        if(shdr[i].sh_type == SHT_SYMTAB){
            symtab_idx = i;
        }
        else if(shdr[i].sh_type == SHT_STRTAB){
            strtab_idx = i; break;
        }
    }
    
    //***symtable->st_name: offset in strtable
    /*st_name
              This  member holds an index into the object file's symbol string table, which holds character
              representations of the symbol names.  If the value is nonzero, it represents a  string  table
              index that gives the symbol name.  Otherwise, the symbol has no name.*/
    //postion symtable
    fseek(fp, shdr[symtab_idx].sh_offset, SEEK_SET);
    int ret_rd_sym = fread(symtab, 1, shdr[symtab_idx].sh_size, fp);
    Assert(ret_rd_sym != 0, "ELF sym read error");
    
    //postion strtable
    fseek(fp, shdr[strtab_idx].sh_offset, SEEK_SET);
    int ret_rd_str = fread(strtab,1,shdr[strtab_idx].sh_size, fp);
    Assert(ret_rd_str != 0, "ELF str read error");
    
    //shdr->sh_entsize:
    /*Some sections hold a table of fixed-sized entries, such as a symbol table.  For such  a  
           section,  this  member gives the size in bytes for each entry.  
           This member contains zero if the section does not hold a table of fixed-size entries.*/
    int num_sym = shdr[symtab_idx].sh_size / shdr[symtab_idx].sh_entsize; //
    
    int j = 0;
    while(j < num_sym){
        if(ELF64_ST_TYPE(symtab[j].st_info) == STT_FUNC){
            elf_func_info[cnt_trace_func].name = strtab + symtab[j].st_name;
            elf_func_info[cnt_trace_func].addr = symtab[j].st_value;
            elf_func_info[cnt_trace_func].size = symtab[j].st_size;
            cnt_trace_func++;
        }
        j++;
    }
    /*
    for(int i=0; i<cnt_trace_func; i++){
        printf("func name :%s, addr:%lx, size:%ld\n",elf_func_info[i].name, elf_func_info[i].addr,elf_func_info[i].size);
    }
    */
    return;
}

#define FRB_SIZE 5000
#define FRB_LENGTH 1024
static char ftrace_ringbuf[FRB_SIZE][FRB_LENGTH];
static int cnt_ftrace = 0;
static int func_dep = 0;//display blank
//static char blank[100]= {0};

void ftrace(vaddr_t pc, vaddr_t dnpc, int pc_inst_opcode, int pc_inst_funct3){
    //int pc_func_index = -1;
    int dnpc_func_index = -1;
    
    //printf("pc:%lx, dnpc:%lx, inst_opcode:%x\n",pc, dnpc, pc_inst_opcode);
    /*
    for(int i=0; i<cnt_trace_func; i++){
        if( (elf_func_info[i].addr <= pc) && (pc < (elf_func_info[i].addr + elf_func_info[i].size) ) ){
            pc_func_index = i;
        }
        if( (elf_func_info[i].addr <= dnpc) && (dnpc < (elf_func_info[i].addr + elf_func_info[i].size))){
            dnpc_func_index = i;
        }
    }
    */
    for(int i=0; i<cnt_trace_func; i++){
        if( (dnpc >= elf_func_info[i].addr) && (dnpc < (elf_func_info[i].addr + elf_func_info[i].size))){
            dnpc_func_index = i;
        }
    }

    char blank[100]={0};
    for(int i=0; i<func_dep; i++){
        blank[i] = ' ';        
    }
    
    if( (pc_inst_opcode == 0x6f) && (dnpc == elf_func_info[dnpc_func_index].addr) ){
            //printf("jal:dnpc_func_index:%d\n",dnpc_func_index);
            //printf("call func: %s\n",elf_func_info[dnpc_func_index].name);
        sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE], "%lx: %scall [%s@0x%lx]", pc, blank, elf_func_info[dnpc_func_index].name, elf_func_info[dnpc_func_index].addr);
        cnt_ftrace++;
        func_dep ++;
    }
    //ret
    else if(pc_inst_opcode == 0x67 && pc_inst_funct3 == 0x00){
        //printf("jalr: dnpc_func_index:%d\n",dnpc_func_index);
        //printf("ret func: %s\n",elf_func_info[dnpc_func_index].name);
        sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE],"%lx: %sret [%s]", pc, blank, elf_func_info[dnpc_func_index].name);
        cnt_ftrace++;
        func_dep--;
    }
    /*
    //judge whether call or ret
    if(dnpc_func_index != pc_func_index){//happened to jump
        //call
        if( (pc_inst_opcode == 0x6f) && (dnpc == elf_func_info[dnpc_func_index].addr) ){
            printf("jal:dnpc_func_index:%d\n",dnpc_func_index);
            printf("call func: %s\n",elf_func_info[dnpc_func_index].name);
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE], "%lx: %scall [%s@%lx]", pc, blank, elf_func_info[dnpc_func_index].name, elf_func_info[dnpc_func_index].addr);
            cnt_ftrace++;
            func_dep ++;
        }
        //ret
        else if(pc_inst_opcode == 0x67 && pc_inst_funct3 == 0x00){
            printf("jalr: dnpc_func_index:%d\n",dnpc_func_index);
            printf("ret func: %s\n",elf_func_info[dnpc_func_index].name);
            sprintf(ftrace_ringbuf[cnt_ftrace%FRB_SIZE],"%lx: %sret [%s]", pc, blank, elf_func_info[dnpc_func_index].name);
            cnt_ftrace++;
            func_dep--;
        }
    }
    */

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
                printf(">%s\n",ftrace_ringbuf[i]);
            else 
                printf(" %s\n",ftrace_ringbuf[i]);
        }
    }
    
}