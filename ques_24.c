#include <stdio.h>

int gcd_finder (int n, int m) {

    int gcd=1;

    for (int i=1; i<=n && i<=m; i++) {

        if(n%i == 0 && m%i == 0)
            gcd = i;

    }

    return gcd;

}

int main (void) {

    int a, b;

    printf("Enter Two Numbers :: ");
    scanf("%d %d", &a, &b);

    printf("HCF :: %d", gcd_finder(a, b));

    return 0;

}