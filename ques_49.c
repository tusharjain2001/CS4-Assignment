#include <stdio.h>
#include <string.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

}

long long hextobin (char h[10]) {

    long long int bin=0;
    int i=0, num[10];

    while (h[i]!='\n') {

        num[i] = 0;

        switch (h[i]) {

            case '0' : num[i] = 0; break;
            case '1' : num[i] = 1; break;
            case '2' : num[i] = 10; break;
            case '3' : num[i] = 11; break;
            case '4' : num[i] = 100; break;
            case '5' : num[i] = 101; break;
            case '6' : num[i] = 110; break;
            case '7' : num[i] = 111; break;
            case '8' : num[i] = 1000; break;
            case '9' : num[i] = 1001; break;
            case 'A' : num[i] = 1010; break;
            case 'B' : num[i] = 1011; break;
            case 'C' : num[i] = 1100; break;
            case 'D' : num[i] = 1101; break;
            case 'E' : num[i] = 1110; break;
            case 'F' : num[i] = 1111; break;

        }

        i++;

    }

    int count = -1;

    for (int j=i-1; j>=0; j--)
        bin += (long long) num[j]*power(10000, ++count);

    return bin;

}

int bintonum (int b) {

    int temp = b, remain, num=0, i=0;

    while (temp != 0) {

        remain = temp%10;
        num += remain*power(2, i);
        temp /= 10;
        ++i;

    }

    return num;

}

int octalConvert (long long b) {

    long long temp = b;
    int remain, o=0, i=0;

    while (temp != 0) {

        remain = (int) (temp%1000);
        o += bintonum(remain)*power(10, i);
        
        i++;
        temp /= 1000;

    }

    return o;

}

int main (void) {

    char hex[10];
    printf("Enter [Hexadecimal] :: ");
    fgets(hex, sizeof hex, stdin);

    printf("Octal :: %d", octalConvert(hextobin(hex)));

    return 0;

}
