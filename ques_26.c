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

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    if (primeChecker(num) == 1)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;

}