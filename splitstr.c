#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *meu_strtok(char *str) {
  static char *continuacao;

  if (str != NULL) {
    continuacao = str; // continuacao é copia de str caso str nao seja null
  }

  if (continuacao == NULL || *continuacao == '\0') {
    return NULL; // verifica se continuacao eh NULL ou se chegou ao final da
                 // string
  }

  char *inicio_token = continuacao; // inicio eh copia de continuacao

  while (*continuacao != ':' && *continuacao != '\0') {
    continuacao++; // aponta para proximo endereco
  }

  if (*continuacao == ':') {
    *continuacao = '\0';
    continuacao++;
  } else {
    continuacao = NULL;
  }

  return inicio_token;
}

int main(int argc, char *argv[]) {
  char string[] = "ola:meu:amigo";
  char *inicio = meu_strtok(string);
  printf("%s", inicio);
}
