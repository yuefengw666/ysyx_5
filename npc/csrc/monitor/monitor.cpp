#include "npc_common.h"
#include <cassert>
#include <cstring>

//static char *img_file = NULL;
//long img_size = 0;

static long load_img(char *img_file) {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);
  assert(fp);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  //int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

int parse_args(int argc, char *argv[]){
    if(argc == 2){
        if(strlen(argv[1]) > 0){
            img_file = argv[1];
            img_size = load_img(img_file);
        }
    }
    return 0;
}


void init_monitor(int argc, char *argv[]) {
    parse_args(argc,argv);

    
}