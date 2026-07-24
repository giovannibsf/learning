/*
1. Desafio: Função str_blen

Crie uma função que retorne um inteiro correspondente ao comprimento em bytes de
  uma string sem incluir o terminador nulo.

*/

#include <stdio.h>

int main(void) {
    char *str = "ola mundo";

    int n = 0;
    for (int i = 0; i < sizeof(str); i++) {
        n += 1;
    }

    printf("%i", n);

}