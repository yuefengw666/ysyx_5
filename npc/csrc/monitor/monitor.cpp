#include "npc_common.h"
#include "mem.h"
#include <cassert>
#include <cstring>
#include "getopt.h"
#include <unistd.h>

void init_sdb();
void init_difftest(char *ref_so_file, long img_size);

static char *img_file = NULL;
static long img_size = 0;
static char *diff_so_file = NULL;

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);
  if(fp == NULL){
    printf("Can not open '%s'\n", img_file);
    assert(fp);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      //case 'b': sdb_set_batch_mode(); break;
      //case 'p': sscanf(optarg, "%d", &difftest_port); break;
      //case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: printf("ARGS=IMG getopt_long return optarg is %c\n",o);
             img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
/*
int parse_args(int argc, char *argv[]){
    if(argc == 2){
        if(strlen(argv[1]) > 0){
            img_file = argv[1];
            img_size = load_img(img_file);
        }
    }
    return 0;
}
*/

void init_monitor(int argc, char *argv[]) {
    parse_args(argc,argv);
    
    long img_size = load_img();
    //diff_so_file = (char *)"/home/yfwu/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    //init_difftest("/home/yfwu/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size);//remove difftest_port
    init_difftest(diff_so_file, img_size);//remove difftest_port
    
    init_sdb();
}