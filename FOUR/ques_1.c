#include <stdio.h>

float cubeNum (float n) {

    return n*n*n;

}

int main (void) {

    float num;

    printf("Enter :: ");
    scanf("%f", &num);

    printf("%.2f", cubeNum(num));

    return 0;

}