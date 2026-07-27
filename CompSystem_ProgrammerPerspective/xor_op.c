#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  printf("*x: %d - *y: %d\n", *x, *y);
  *x = *x ^ *y;
  printf("*x: %d - *y: %d\n", *x, *y);
  *y = *x ^ *y;
  printf("*x: %d - *y: %d\n", *x, *y);
}

void reverse_array(int a[], int cnt);

int main() {
  /*int x = 1;
  int y = 2;
  inplace_swap(&x, &y);
  */

  int size = 5;
  int x[] = {1, 2, 3, 4, 5};
  reverse_array(x, size);

  for (int i = 0; i < size; i++) {
    printf(" %d ", x[i]);
  }
}

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--) {
    inplace_swap(&a[first], &a[last]);
  }
}
