#include <stdio.h>

void pal_drm (int n);

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Palindrome :: ");
    pal_drm(num);

    return 0;

}

int reverse (int n) {

    int result=0, remain;

    while (n!=0) {

        remain = n%10;
        result = result*10 + remain;
        n /= 10;

    }

    return result;

}

void pal_drm (int n) {

    if(n == reverse(n))
        printf("True");
    else
        printf("False");

}