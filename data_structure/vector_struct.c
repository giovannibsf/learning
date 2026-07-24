#include <stdio.h>
#include <stdlib.h>

typedef struct Vetor {
  int *ptr;
  int capacity;
  int size;
} Vetor;

struct Vetor initialize();

void add_num(int num, struct Vetor *p);

int main(int argc, char *argv[]) {
  Vetor vetor = initialize();
  int n, c;
  while ((scanf("%i", &n) == 1)) {
    add_num(n, &vetor);
  }
  for (int i = 0; i < vetor.size; i++) {
    printf("%d ", vetor.ptr[i]);
  }

  return 0;
}

struct Vetor initialize() {
  Vetor vetor;
  int *ptr = malloc(3 * sizeof(int));

  vetor.ptr = ptr;
  vetor.capacity = 3;
  vetor.size = 0;

  return vetor;
}

void add_num(int number, Vetor *p) {
  if ((*p).size >= (*p).capacity) {
    int *temp = realloc((*p).ptr, 2 * (*p).capacity * sizeof(int));

    printf("\n");
    (*p).ptr = temp;
    (*p).capacity *= 2;
  }
  (*p).ptr[(*p).size] = number;
  printf("position: %d - number: %d\n ", (*p).size, (*p).ptr[(*p).size]);
  (*p).size++;
}
