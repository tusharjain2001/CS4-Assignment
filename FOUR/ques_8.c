#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    return 1;

}

int armstrongChecker (int n) {

    int flag = 0, temp = n, size = 0, result = 0, remain = 0;

    while (temp != 0) {

        size++;
        temp /= 10;

    }

    temp = n;

    while (temp != 0) {
        
        remain = temp%10;
        result += power(remain, size);
        temp /= 10;

    }
    
    

    if (n == result)
        flag = 1;

    return flag;

}

int main (void) {

    int a, b;

    printf("Enter [1st] :: ");
    scanf("%d", &a);
    printf("Enter [2nd] :: ");
    scanf("%d", &b);

    printf("--Armstrong Number--\n");

    for(int i=a; i<=b; i++)
        if(armstrongChecker(i))
            printf(">> %d\n", i);

    return 0;

}