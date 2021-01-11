#include <stdio.h>

int fibo (int n) {

    if(n == 0)
        return 0;

    else if(n == 1)
        return 1;

    else 
        return fibo(n-1) + fibo(n-2);

}

int main (void) {

    int n;

    printf("Enter :: ");
    scanf("%d", &n);

    printf("%d-Term [Fibonacci] :: %d", n, fibo(n));

    return 0;

}