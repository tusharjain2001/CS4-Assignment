#include <stdio.h>

int main (void) {

    char c;

    printf("Enter :: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
        printf("Alphabet - UpperCase");
    else if(c >= 'a' && c <= 'z')
        printf("Alphabet - LowerCase");
    else
        printf("Not an Alphabet");

    return 0;

}