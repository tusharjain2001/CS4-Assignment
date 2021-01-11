#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

}

int octtobin (int o) {

    int temp = o, b=0, flag, i=0;

    if (o==0)
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

int binConvert (int o) {

    int temp = o, remain, bin=0, i=0;

    while (temp != 0) {

        remain = temp%10;
        bin += octtobin(remain)*power(1000, i);
        i++;
        temp /= 10;

    }

    return bin;

}

int bintonum (int o) {

    int b = binConvert (o);

    int n=0, temp=b, remain, i=0;

    while (temp != 0) {

        remain = temp%10;
        n += remain*power(2, i);
        i++;
        temp /= 10;

    }

    return n;

}

int main (void) {

    int oct;

    printf("Enter [Octal] :: ");
    scanf("%d", &oct);

    printf("Binary :: %d", bintonum(oct));

    return 0;

}
