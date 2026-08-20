#include <stdio.h>

int accum = 0;

int sum(int x, int y) {
  int t = x + y;
  accum += t;
  return t;
}

int main()
{
  int x = 2, y = 3;
  int a = sum(x,y);
}
