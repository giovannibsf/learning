/*
Dado o programa, Crie a função array_shift de acordo com a descrição abaixo:
PROTÓTIPO:
    void array_shift(int *arr, int size, int shift);

DESCRIÇÃO:
    Desloca para a esquerda os elementos do vetor 'arr', de tamanho 'size',
    em 'shift' posições.
*/

#include <stdio.h>

#define SIZE 10

void array_shift(int *arr, int size, int shift) {
    for (int i = 0; i < size - shift; i++) {
        int guard = arr[i];
        arr[i] = arr[i + shift];
        arr[i + shift] = guard;
        
    }
}

int main(void) {
    int vetor[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int desloca =  5;// <--- inicializar com o valor do deslocamento!

    array_shift(vetor, SIZE, desloca);

    for (int i = 0; i < SIZE; i++) {
        printf("%i ", vetor[i]);
    }

    /* Rotina de impressão do resultado do deslocamento */

    return 0;
}