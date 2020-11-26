#include <stdio.h>

int main (void) {

    int n, first_digit, last_digit;
    printf("Enter :: ");
    scanf("%d", &n);

    last_digit = n%10;

    while (n!=0) {

        first_digit = n;
        n /= 10;

    }

    printf("First Digit :: %d\n", first_digit);
    printf("Last Digit  :: %d\n", last_digit);
    printf("Sum :: %d", first_digit+last_digit);

    return 0;
}