#include <stdio.h>

int reverseNum (int n) {

    static int remain=0;

    if(n==0)
        return remain;

    remain = remain*10 + (n%10);

    if(n!=0)
        return reverseNum (n/10);

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Reversed :: %d", reverseNum(num));

    return 0;

}
