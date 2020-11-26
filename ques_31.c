#include <stdio.h>
#include <math.h>

int armstrongChecker (int n) {

    int flag = 0, temp = n, size = 0, result = 0, remain = 0;

    while (temp != 0) {

        size++;
        temp /= 10;

    }

    temp = n;

    while (temp != 0) {
        
        remain = temp%10;
        result += pow(remain, size);
        temp /= 10;

    }
    
    

    if (n == result)
        flag = 1;

    return flag;

}

int main (void) {

    int num;
    
    printf("Enter :: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
        if (armstrongChecker(i))
            printf("%d\n", i);

    return 0;

}