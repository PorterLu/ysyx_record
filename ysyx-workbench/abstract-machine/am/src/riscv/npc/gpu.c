#include <am.h> 
#include <string.h>
#include <stdio.h>
#include <riscv/riscv.h>

#define VGACTL_ADDR 0xa0000100
#define SYNC_ADDR  	0xa0000104
#define FB_ADDR 0xa1000000

static int w, h;

void __am_gpu_init() {
  uint32_t size = *(volatile uint32_t*) (VGACTL_ADDR);
  w = size >> 16;
  h = size & 0xffff;

}
 
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 0, .height = 0,
    .vmemsz = 0
  };

  uint32_t size = *(volatile uint32_t*) (VGACTL_ADDR);
  cfg->width = size >> 16;
  cfg->height = size & 0xffff;
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x;
  int y = ctl->y;
  int width = ctl->w;
  int height = ctl->h;
  char *src = ctl->pixels;
  char* dest = (char*) FB_ADDR;

  dest += ((y * w) + x) * 4;

  for(int i = 0; i < height; i++)
  {
	memcpy(dest , src, width * 4);
	dest += (w * 4);
	src += (width*4);
  }

  if (ctl->sync) {
    *(volatile uint32_t*)(SYNC_ADDR) = 1;
  }  
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}