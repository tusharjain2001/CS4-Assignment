#include <stdio.h>

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}