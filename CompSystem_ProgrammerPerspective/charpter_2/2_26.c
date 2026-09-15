#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s); // size_t is defined at stdio as unsigned int

int str_counter(char *s) {
  int counter = 0;
  while (s[counter] != '\0') {
    counter++;
  }
  printf("%d", counter);
  return counter;
}

int longer_str(char *s, char *v) {
  printf("%lu ", strlen(s));
  printf("%lu ", strlen(v));
  printf("%lu", strlen(s) - strlen(v));

  return strlen(s) - strlen(v) > 0;
}

int main(int argc, char *argv[]) {
  int numb = longer_str("ola", "oissdafafs");
  printf("%d", numb);
}

// 1 - For waht cases will this function produce an incorrect result?
//  it produce a incorrect result when the second string is bigger then the
//  first one
//
// 2 - Explain how this incorrect result comes about
//  the bug occurs becaus size_t is a unsigned, so it can't be negative, even if
//  i put a "-" first
//
// 3 - Show how to fix the code so that it will work reliably
// we fix the problem changing the returned value from strlen to a signed type
