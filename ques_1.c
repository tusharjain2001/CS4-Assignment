#include <stdio.h>

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++)
        printf("%d ", i);

    return 0;
}