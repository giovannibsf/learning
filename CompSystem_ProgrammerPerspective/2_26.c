#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char* s);

int longer_str(char* s, char* v) {
 return strlen(s) - strlen(v) > 0; 
}

int main(int argc, char *argv[])
{
  printf("%d", longer_str("ola", "viusss"));
}
