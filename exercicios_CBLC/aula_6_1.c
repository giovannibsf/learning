/*
1. Desafio: Função print_array_shift

Dado o programa, escreva a função print_array_shift de acordo com essa descrição:
PROTÓTIPO:
    void print_array_shift(int *arr, int size, int shift);

DESCRIÇÃO:
    Desloca para a esquerda os elementos do vetor 'arr', de tamanho 'size',
    em 'shift' posições e imprime os valores na sequência resultante.

No teste, programa deverá imprimir no terminal:
:~$ ./a.out
6 7 8 9 10 1 2 3 4 5
*/

#include <stdio.h>

#define SIZE 10

void print_array_shift(int *arr, int size, int shift) {
    for (int i = 0; i < size - shift; i++) {
        int guard = arr[i];
        arr[i] = arr[i + shift];
        arr[i + shift] = guard;
    }
    for (int i = 0; i < size; i++) {
        printf("%i ", arr[i]);
    }
}

int main(void) {
    int vetor[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int desloca = 5; // <--- inicializar com o valor do deslocamento!

    print_array_shift(vetor, SIZE, desloca);

    return 0;
}