#include <stdio.h>

void oddeven (int n) {

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
        
}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    oddeven(num);

    return 0;

}