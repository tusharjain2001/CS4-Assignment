#include <stdio.h>

int main (void) {

    int a, b;

    printf("Enter two Values [Separate by Comma] :: ");
    scanf("%d, %d", &a, &b);

    int max = (b>a) ? b:a;

    printf("Max Value :: %d", max);

    return 0;

}