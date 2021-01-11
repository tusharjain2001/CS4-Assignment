#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

}

int bintonum (int b) {

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

    int num;

    printf("Enter [Binary] :: ");
    scanf("%d", &num);

    printf("Number :: %d", bintonum(num));

    return 0;

}
