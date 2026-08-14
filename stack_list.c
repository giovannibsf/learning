#include <stdio.h>
#include <stdlib.h>

typedef struct stackList {
  char *element;
  int topIndex;
  unsigned capacity;
} stackList;

struct stackList start();

int main(int argc, char *argv[]) {

  /*Email:
    6a25b1e0a7dfb @email.com Senha : 6a25b1e0a7dfb

  */
}

struct stackList start() {
  struct stackList *newNode = malloc(sizeof(struct stackList));
  newNode->capacity = 3;
  newNode->element = malloc(sizeof(char));

  return *newNode;
}
