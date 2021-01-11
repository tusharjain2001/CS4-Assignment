#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

}

int numtobin (int n) {

    int temp = n, b=0, flag, i=0;

    if (n==0)
        goto here;

    while (temp != 1) {

        flag = temp%2;
        
        b += flag*power(10, i);

        temp = (temp-flag)/2;

        i++;

    }

    b += power(10, i);

    here:
        return b;

}

int main () {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Binary :: %d", numtobin(num));

    return 0;

}
