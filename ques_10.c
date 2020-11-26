#include <stdio.h>

int main (void) {

    int n, count=0;
    printf("Enter :: ");
    scanf("%d", &n);

    while (n!=0) {

        n /= 10;
        count++;

    }

    printf("Total Digits :: %d", count);

    return 0;
}