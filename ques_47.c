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

void hexConvert (int b) { 

    int temp = b, remain, num, i=0;
    char c[10];

    while (temp != 0) {

        remain = temp%10000;

        switch (remain) {

            case 0 : c[i] = '0'; break;
            case 1 : c[i] = '1'; break;
            case 10 : c[i] = '2'; break;
            case 11 : c[i] = '3'; break;
            case 100 : c[i] = '4'; break;
            case 101 : c[i] = '5'; break;
            case 110 : c[i] = '6'; break;
            case 111 : c[i] = '7'; break;
            case 1000 : c[i] = '8'; break;
            case 1001 : c[i] = '9'; break;
            case 1010 : c[i] = 'A'; break;
            case 1011 : c[i] = 'B'; break;
            case 1100 : c[i] = 'C'; break;
            case 1101 : c[i] = 'D'; break;
            case 1110 : c[i] = 'E'; break;
            case 1111 : c[i] = 'F'; break;

        }
        
        i++;
        temp /= 10000;

    }

    for (int j=i-1; j>=0; j--)
        printf("%c", c[j]);
}

int main () {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Hexadecimal :: "); 
    hexConvert(numtobin(num));

    return 0;

}
