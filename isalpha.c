#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int* newlist = malloc(sizeof(int[69]));

  char* list[] = {"1", "15"};
  newlist[0] = atoi("1");
  if (isdigit(newlist[0]))
  {
    printf("true");
    free(newlist);
    return 0;
  }
  free(newlist);
  printf("false");
  return 1;
}
