#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  /*
  int i;
  int w = inw(VGACTL_ADDR + 2);
  int h = inw(VGACTL_ADDR);
  uint32_t *fb=(uint32_t *)(uintptr_t)FB_ADDR;
  for(i=0; i < w*h; i++) fb[i] = i;
  outl(SYNC_ADDR, 1);
*/
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  int w = inw(VGACTL_ADDR + 2);
  int h = inw(VGACTL_ADDR);
  
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = w * h * sizeof(uint32_t)
  };

}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = inw(VGACTL_ADDR + 2);
  uint32_t *p = ctl->pixels;
  for(int j=0; j < ctl->h; j++){
    for(int i=0; i < ctl->w; i++){
      outl(FB_ADDR + (j+ctl->y)*4*w + (i+ctl->x)*4, *p); //
      p++;
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
