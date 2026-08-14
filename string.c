#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char string[10] = "";
  int size = strlen(string);
  string[size] = '5';
  string[size + 1] = '4';
  printf("%d ", size);
  printf("%s ", string);

  int numb = atoi(string);
  printf("%d", numb);
}
