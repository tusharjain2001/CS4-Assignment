#include <stdio.h>

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    int t1 = 0, t2 = 1, t3 = 0;

    for(int i=1; i<=num; i++) {

        printf("%d ", t2);
        t3 = t2;
        t2 += t1;
        t1 = t3;

    }

    return 0;

}