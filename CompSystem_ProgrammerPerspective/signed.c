#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int length) {
  int i;

  for (i = 0; i < length; i++) {
    printf(" %.2x", start[i]);
  }
  printf("\n");
}

int main() {
  short x = 12345;
  short mx = -x;

  show_bytes((byte_pointer)&x, sizeof(x));
  show_bytes((byte_pointer)&mx, sizeof(mx));
}
