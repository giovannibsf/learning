#include <stdio.h>

int x_eq_y(int x, int y) { return !(x ^ y); }

int main(int argc, char *argv[]) {
  int x = 0x56;
  int y = 0x56;
  int result = x_eq_y(x, y);
  printf("%d", result);
}
