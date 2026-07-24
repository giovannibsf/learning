/*
Dado o programa, 
Escreva a função array_reverse de acordo com a descrição abaixo:
PROTÓTIPO:
    void array_reverse(int *arr, int size);

DESCRIÇÃO:
    Inverte a ordem dos elementos do vetor 'arr'.

O teste deverá imprimir…
:~$ ./a.out
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
*/


#include <stdio.h>

#define SIZE 10

void array_reverse(int *arr, int size) {
    for (int i = 0; i < (size / 2); i++) {
        int guard = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = guard;
    }
}

int main(void) {
    int vetor[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* Rotina da impressão do vetor original */
    for (int i = 0; i < SIZE; i++) {
        printf("%i ", vetor[i]);
    }

    printf("\n");

    array_reverse(vetor, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        printf("%i ", vetor[i]);
    }
    return 0;
}