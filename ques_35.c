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

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("--Strong Number--\n");
    for(int i=1; i<=num; i++)
        if(strongChecker(i))
            printf(">> %d\n", i);

    return 0;

}