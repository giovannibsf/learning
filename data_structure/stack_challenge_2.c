#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha {
  int *executed_time;
  int index_top;
  int index_prev;
  unsigned capacity;

} Pilha;

void separateString(char *log, Pilha *pilha);
Pilha startStack(int number_functions);
void push(int element_id, char *moment, int time, Pilha *pointer);
void pop(Pilha *pointer);

int *exclusiveTime(int n, char **logs, int logsSize, int *returnSize) {
  Pilha newPilha = startStack(n);
  for (int i = 0; i < logsSize; i++) {
    separateString(logs[i], &newPilha);
  }

  *returnSize = n;

  return &newPilha.executed_time[0];
}

void separateString(char *log, Pilha *pilha) {
  char element_id[10] = "";
  char element_moment[10] = "";
  char element_time[10] = "";

  int position = 0;
  int i = 0;

  for (int i = 0; i < strlen(log); i++) {
    if (log[i] == ':') {
      position++;
    } else if (position == 0) {
      int size_id = strlen(element_id);
      element_id[size_id] = log[i];
    } else if (position == 1) {
      int size_moment = strlen(element_moment);
      element_moment[size_moment] = log[i];
    } else {
      int size_time = strlen(element_time);
      element_time[size_time] = log[i];
    }
  }

  int id = atoi(element_id);
  // printf("curr_element id: %d\n", id);
  // printf("curr index_top: %d\n", pilha->index_top);
  int time = atoi(element_time);

  push(id, element_moment, time, pilha);
}

Pilha startStack(int n) {
  Pilha *newPilha = malloc(sizeof(Pilha));
  newPilha->capacity = n;
  newPilha->index_top = 0;
  newPilha->index_prev = 0;
  newPilha->executed_time = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    newPilha->executed_time[i] = 0;
  }

  return *newPilha;
}

void push(int element_id, char *moment, int time, Pilha *pointer) {}

/*  if (pointer->index_top == element_id) {
    if (strcmp(moment, "end") == 0) {
      pointer->executed_time[element_id] +=
          (time - pointer->executed_time[pointer->index_prev]) + 1;
    } else {
      pointer->executed_time[element_id] +=
          (time - pointer->executed_time[element_id]);
    }
  } else {
    pointer->index_prev = pointer->index_top;
    pointer->index_top = element_id;
    if (strcmp(moment, "end") == 0) {
      pointer->executed_time[pointer->index_top]++;
    } else {
      pointer->executed_time[pointer->index_prev] +=
          (time - pointer->executed_time[pointer->index_prev]);
    }
  } */
