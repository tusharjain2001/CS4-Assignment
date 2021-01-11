#include <stdio.h>

void numPattern (int n) {

    int count=1;

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n; j++) {

            printf("%d ", count);
            count++;
            count %= 2;

        }

        printf("\n");

    }

}

int main (void) {

    numPattern (5);

    return 0;

}