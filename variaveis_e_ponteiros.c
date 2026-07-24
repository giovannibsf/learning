#include <stdio.h>

int main(void) {
    int a = 25;
    int b = 17;
    int *p = &b;
    int arr[3] = {1, 2, 3};

    char arr_2[3] = {'a', 'b', 'c'};

    printf("endereço de a: %p\n", &a);
    printf("endereço de b: %p\n", p);
    printf("valor de b: %d\n", *p);
    printf("valor de b: %p\n", p);
    printf("endereço de (p + 1): %p\n", (p+1));
    printf("valor presente em (p+1): %d\n", *(p+1));

    printf("endereço do primeiro elemento do vetor: %p\n", &arr[0]);
    printf("endereço do vetor: %p\n", &arr);
    printf("endereço do segundo elemento do vetor: %p\n", &arr[1]);

    printf("endereço do primeiro elemento do vetor: %p\n", &arr_2[0]);
    printf("endereço do vetor: %p\n", &arr_2);
    printf("endereço do segundo elemento do vetor: %p", &arr_2[1]);
}
