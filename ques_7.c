#include <stdio.h>

int main (void) {

    int n, sum=0;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=1; i<=n ; i++) {

        if(i%2==0)
            sum += i;
    
    }
    
    printf("Sum :: %d", sum);

    return 0;
}