 #include <stdio.h>

void diPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int k=n; k>i; k--)
            printf(" ");

        for (int j=0; j<i; j++)
            printf("* ");
        
        printf("\n");

    }

    n--;

    for (int i=0; i<=n-1; i++) {

        for (int k=0; k<=i; k++)
            printf(" ");

        for (int j=n; j>i; j--)
            printf("* ");
        
        printf("\n");

    }

}

int main (void) {

    diPattern (5);

    return 0;
}