#include <stdio.h>

void pyPattern (int n) {

    for (int i=n; i>=1; i--) {

        for (int k=n; k>i; k--)
            printf("  ");
        
        for (int j=i*2-1; j>0; j--) {
        
            if(( j==1 || j==i*2-1 ) || i==n )
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