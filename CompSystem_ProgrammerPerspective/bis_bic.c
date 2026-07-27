#include <stdio.h>

typedef unsigned int *byte_hunt;

int bis(int x, int m) { return x | m; }

int bic(int x, int m) { return (x | m) ^ m; }

int bool_or(int x, int y) {
  int result = bis(x, y);
  return result;
}

int bool_xor(int x, int y) {
  int result = bis(bic(bis(x, y), x), bic(x, y));
  return result;
}

int main(int argc, char *argv[]) {
  unsigned int x = 0b1100;
  unsigned int m = 0b1010;
  int result = bool_xor(x, m);

  for (int i = 0; i < sizeof(int); i++) {
    printf("%d ", (result >> i) & 1);
  }
}
