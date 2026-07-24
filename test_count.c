#include <stdio.h>

int main(void) {

    int valOne = 9, valTwo = 9;

    int sumOfTwo = (valOne + valTwo);
    float sumOfTwoFloat = (float) sumOfTwo; 
    float sum_parcial = ((sumOfTwo / 10.0) - 1.0);
    printf("soma parcial: %f\n", sum_parcial);

    int sum = (sum_parcial * 10);
    printf("soma: %i", sum);
}