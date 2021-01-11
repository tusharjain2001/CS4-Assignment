#include <stdio.h>

int main (void) {

    char c;

    printf("Enter :: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
        printf("Alphabet");
    else if(c >= '0' && c <= '9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;

}