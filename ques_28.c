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

    int num, sum=0;

    printf("Enter :: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++)
        if (primeChecker(i) == 1)
            sum += i;

    printf("Sum of Prime :: %d", sum);

    return 0;

}