#include <stdio.h>

int gcd (int a, int b) {

    if(b!=0)
        return gcd (b, a%b);
    
    return a;

}

int main (void) {

    int numO, numT;

    printf("Enter [First] :: ");
    scanf("%d", &numO);

    printf("Enter [Second] :: ");
    scanf("%d", &numT);

    printf("HCF :: %d", gcd((numO>numT) ? numO:numT, (numO>numT) ? numT:numO));

    return 0;

}