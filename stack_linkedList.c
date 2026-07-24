#include <stdio.h>
#include <stdlib.h>

struct stackNode {
  int element;
  struct stackNode *next;
};

struct stackNode createNode(int element) {
  struct stackNode *newNode = malloc(sizeof(struct stackNode));
  if (!newNode) {
    printf("heap overflow!");
  }
  newNode->element = element;
  newNode->next = NULL;
}
