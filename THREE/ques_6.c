#include <stdio.h>

int main (void) {

    int year;

    printf("Enter Year :: ");
    scanf("%d", &year);

    if(year%4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;

}