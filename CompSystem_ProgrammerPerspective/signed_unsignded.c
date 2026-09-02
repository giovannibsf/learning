#include <stdint.h>
#include <stdio.h>

int main() {
  unsigned long u = 4299672945;
  int32_t tu = (int)u;

  printf("u: %lu; tu: %d\n", u, tu);
}
