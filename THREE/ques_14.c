#include <stdio.h>

int main (void) {

    int a, b, c;

    printf("Enter Three Angles [Separate by Comma] :: ");
    scanf("%d, %d, %d", &a, &b, &c);

    if(a+b+c == 180)
        printf("Triangle");
    else
        printf("Not a Triangle");

    return 0;

}