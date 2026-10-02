#include <stdio.h>
#include <stdlib.h>

int tadd(int x, int y) {
  int sum = x+y;
  return (sum-x == y) && (sum-y==x);
}

int main(int argc, char *argv[])
{
  int x = 5;
  int y = 2147483647;
  printf("%d \n", x+y);

}
