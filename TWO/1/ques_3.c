#include <stdio.h>

void numPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n; j++) {

            if((i==1 || i==n)||(j==1 || j==n))
                printf("1 ");
            
            else
                printf("0 ");

        }

        printf("\n");

    }

}

int main (void) {

    numPattern (5);

    return 0;

}