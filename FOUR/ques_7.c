#include <stdio.h>

int factor (int n) {

    if(n!=0)
        return n*factor(n-1);
    
    return 1;

}

int strongChecker (int n) {

    int flag = 0, remain, result = 0, temp = n;

    while (temp!=0) {

        remain = temp%10;
        result += factor(remain);
        temp /= 10;

    }

    if(result == n)
        flag = 1;

    return flag;

}

int main (void) {

    int a, b;

    printf("Enter [1st] :: ");
    scanf("%d", &a);
    printf("Enter [2nd] :: ");
    scanf("%d", &b);

    printf("--Strong Number--\n");

    for(int i=a; i<=b; i++)
        if(strongChecker(i))
            printf(">> %d\n", i);

    return 0;

}