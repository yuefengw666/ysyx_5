#include <npc_common.h>
#include <map.h>
//#include <alarm.h>
#include <utils.h>
#include <sys/time.h> 
#include <time.h>
#include <npc_state.h>

static_assert(CLOCKS_PER_SEC == 1000000, "CLOCKS_PER_SEC != 1000000");
static_assert(sizeof(clock_t) == 8, "sizeof(clock_t) != 8");

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
  //uint64_t us = io_read(AM_TIMER_UPTIME).us;
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 4) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    rtc_port_base[1] = us >> 32;
  }
}
/*
#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (npc_state.state == NPC_RUNNING) {
    extern void dev_raise_intr();
    dev_raise_intr();
  }
}
#endif
*/
void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
}
