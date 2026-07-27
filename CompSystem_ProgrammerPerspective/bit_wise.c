#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void least_significant_byte(int x);
void all_complemented_but_least_signific_byte(int x);
void least_sig_one_rest_unchanged(int x);

int main(int argc, char *argv[]) {
  int x = 0x87654321;
  // least_significant_byte(x);
  // all_complemented_but_least_signific_byte(x);
  least_sig_one_rest_unchanged(x);
}

void least_significant_byte(int x) {
  int result = x & 0xFF;
  byte_pointer result_byte = (byte_pointer)&result;

  for (int i = 0; i < sizeof(int); i++) {
    printf("%.2x", result_byte[i]);
  }
}

void all_complemented_but_least_signific_byte(int x) {
  int cp_x = x;
  cp_x = (~cp_x) ^ 0xFF;

  byte_pointer result = (byte_pointer)&cp_x;

  for (int i = 0; i < sizeof(int); i++) {
    printf("%.2x", result[i]);
  }
}

void least_sig_one_rest_unchanged(int x) {
  int cp_x = x | 0xFF;
  byte_pointer result = (byte_pointer)&cp_x;
  for (int i = 0; i < sizeof(int); i++) {
    printf("%.2x", result[i]);
  }
}
