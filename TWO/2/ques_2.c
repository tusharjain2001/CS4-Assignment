#include <stdio.h>

void pyPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int k=n; k>i; k--)
            printf("  ");

        for (int j=0; j<i*2-1; j++) {
            
            if(( j==0 || j==i*2-2 ) || i==n )
                printf("* ");

            else
                printf("  ");
        
        }

        printf("\n");

    }

}

int main (void) {

    pyPattern (5);

    return 0;
}