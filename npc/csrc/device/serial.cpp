#include <npc_common.h>
#include <utils.h>
#include <map.h>
#include <mmio.h>
#ifdef CONFIG_TARGET_AM
  #include <klib.h>
#endif
/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define CH_OFFSET 0

static uint8_t *serial_base = NULL;


static void serial_putc(char ch) {
  #ifdef CONFIG_TARGET_AM
    putch(ch),
  #endif
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1);
  switch (offset) {
    /* We bind the serial port with the host stderr in NEMU. */
    case CH_OFFSET:
      if (is_write) serial_putc(serial_base[0]);
      else {
        printf("do not support read\n");
        assert(0);
      }
      break;
    default: printf("do not support offset = %d", offset);
            assert(0);
  }
}

void init_serial() {
  serial_base = new_space(8);

  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
}
