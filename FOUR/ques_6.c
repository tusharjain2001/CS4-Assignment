#include <stdio.h>

int primeChecker (int n) {

    if(n<=1)
        n=4;

    for (int i=2; i<=n/2; i++)
        if(n%i==0)
            return 0;

    return 1;

}

void primeInterval (int n, int m) {
    
    for (int i=n; i<=m; i++)
        if(primeChecker(i))
            printf(">> %d\n", i);

}

int main (void) {

    int a, b;

    printf("Enter [1st] :: ");
    scanf("%d", &a);
    printf("Enter [2nd] :: ");
    scanf("%d", &b);

    printf("--PRIME--\n");
    primeInterval (a, b);

    return 0;

}