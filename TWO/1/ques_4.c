#include <stdio.h>

void numPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n; j++) {

            if(i==n/2+1 && j==n/2+1)
                printf("0 ");
            
            else
                printf("1 ");

        }

        printf("\n");

    }

}

int main (void) {

    numPattern (5);

    return 0;

}