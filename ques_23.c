#include <stdio.h>

int factor (int n) {

    if(n!=0)
        return n*factor(n-1);
    
    return 1;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Factor :: %d", factor(num));

    return 0;

}