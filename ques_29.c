#include <stdio.h>

int primeChecker (int n) {

    int flag = 1;

    if (n<2)
        n = 4; 

    for (int i=2; i<=n/2; i++)
        if (n%i==0)
            flag = 0;

    return flag;
}

void factors (int n) {

    for(int i=1; i<=n; i++) {

        if(n%i == 0 && primeChecker(i))
            printf(">> %d\n", i);
    
    }

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("--Prime Factors--\n");
    factors(num);

    return 0;

}