#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);

    return 1;

}

void primeChecker (int n);
void armstrongChecker (int n);
void perfectChecker (int n);


int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Prime      >> ");
    primeChecker(num);

    printf("\nArmstrong  >> ");
    armstrongChecker(num);

    printf("\nPerfect    >> ");
    perfectChecker(num);

    return 0;

}

void primeChecker (int n) {

    int flag=1;

    if(n<=1)
        n=4;

    for (int i=2; i<=n/2; i++)
        if(n%i==0)
            flag=0;

    if(flag==1)
        printf("True");
    else
        printf("False");

}

void armstrongChecker (int n) {

    int flag=1, temp = n, remain, arm=0, count=0;

    while (temp !=0 ) {
 
        count++;
        temp /= 10;

    }

    temp = n;

    while (temp !=0 ) {

        remain = temp%10;
        arm += power(remain, count);
        temp /= 10;

    }

    if (n==arm)
        printf("True");
    else
        printf("False");

}

void perfectChecker (int n) {

    int sum=0;

    for(int i=1; i<n; i++)
        if(n%i==0)
            sum += i;
    
    if (sum==n)
        printf("True");
    else
        printf("False");

}