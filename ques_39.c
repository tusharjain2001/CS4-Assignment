#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

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

int octalConvert (int b) {

    int temp = b, remain, o=0, i=0;

    while (temp != 0) {

        remain = temp%1000;
        o += bintonum(remain)*power(10, i);
        
        i++;
        temp /= 1000;

    }

    return o;

}

int main (void) {

    int num;

    printf("Enter [Binary] :: ");
    scanf("%d", &num);

    printf("Octal :: %d", octalConvert(num));

    return 0;

}
