#include <stdio.h>
#include <stdlib.h>

long int tadd_ok(int x, int y) {
  unsigned sum_x_y = x + y;
  unsigned limit = 2147483647;
  if (sum_x_y > limit) {
    return 1;
  }
  return sum_x_y;
}

int main(int argc, char *argv[])
{
  int x = 25;
  int y = 2147483647;
  printf("%u \n", tadd_ok(x, y));
}
