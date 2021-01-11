#include <stdio.h>

int numberSum (int n) {

    if(n!=0)
        return n+numberSum(n-1);
    
    return 0;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Sum :: %d", numberSum(num));

    return 0;

}