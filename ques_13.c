#include <stdio.h>
#include <math.h>

int first_digit (int n) {

    int fd;

    while (n!=0) {

        fd = n;
        n /= 10;

    }

    return fd;
}

int last_digit (int n) {

    return n%10;
    
}

int count (int n) {

    int c=0;

    while (n!=0) {
        n /= 10;
        c++;
    }

    return c;

}

int converter (int n) {

    int f = first_digit(n), l = last_digit(n), digits = count(n)-1;
    
    printf("%d %d %d\n", f, l, digits);

    n = n - l + f;
    n = n - f*pow(10, digits) + l*pow(10, digits);

    return n;
}

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    printf("%d", converter(n));

    return 0;
}