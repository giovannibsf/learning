#include <stdio.h>
#include <stdlib.h>

int fun1(unsigned word) { return (int)((word << 24) >> 24); }
int fun2(unsigned word) { return ((int)word << 24) >> 24; }
int main(int argc, char *argv[]) {
  unsigned a[4] = {0x00000076, 0x87654321, 0x000000c9, 0xedcba987};
  for (int i = 0; i < 4; i++) {
    printf("fun1: %i   -   fun2: %i  \n", fun1(a[i]), fun2(a[i]));
  }
}
