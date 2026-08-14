#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
  int element;
  struct stackNode *next;
} stackNode;

struct stackNode createNode(int element) {
  stackNode *newNode = malloc(sizeof(stackNode));
  if (!newNode) {
    printf("heap overflow!");
  }
  newNode->element = element;
  newNode->next = NULL;

  return *newNode;
}
