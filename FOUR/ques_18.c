#include <stdio.h>

int factorial (int n) {
    
    if(n!=0)
        return n*factorial(n-1);

    return 1;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Factorial :: %d", factorial(num));

    return 0;

}