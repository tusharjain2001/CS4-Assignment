#include <stdio.h>

void factors (int n) {

    for(int i=1; i<=n; i++) {

        if(n%i == 0)
            printf(">> %d\n", i);
    
    }

}

int main (void) {

    int num;
    printf("Enter :: ");
    scanf("%d", &num);

    printf("--FACTORS--\n");
    factors (num);

    return 0;

}