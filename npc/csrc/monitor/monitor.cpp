#include "npc_common.h"
#include "mem.h"
#include "getopt.h"
#include <unistd.h>

void init_log(const char *log_file);
void init_difftest(char *ref_so_file, long img_size);
void init_sdb();
void init_disasm(const char *triple);

static char *log_file = NULL;
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
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
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

void init_monitor(int argc, char *argv[]) {
    
    /* Parse arguments. */
    parse_args(argc,argv);
    
    /* Open the log file. */
    init_log(log_file);
    
    /* Load the image to memory. This will overwrite the built-in image. */
    long img_size = load_img();

    /* Initialize differential testing. */
    init_difftest(diff_so_file, img_size);//remove difftest_port
    
    /* Initialize the simple debugger. */
    init_sdb();

    /* Initialize the disasm. */
    IFDEF(CONFIG_ITRACE, init_disasm("riscv64-pc-linux-gnu"));
}