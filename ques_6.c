#include <stdio.h>

int main (void) {

    int n, sum=0;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
        sum += i;
    
    printf("Sum :: %d", sum);

    return 0;
}