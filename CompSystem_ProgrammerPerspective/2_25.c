#include <stdio.h>
#include <stdlib.h>

float sum_elements(float a[], unsigned length) {
  int i;
  float result = 0;

  for(i = 0; i < length; i++) {
    result += a[i]; 
  }
  return result;
}

int main(int argc, char *argv[])
{
  float a[] = {1.32, 1.44};
  printf("%f \n", sum_elements(a, 0)); 
}
