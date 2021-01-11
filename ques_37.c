#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    return 1;

}

int main (void) {

    int bin;

    printf("Enter [Binary] :: ");
    scanf("%d", &bin);

    int temp = bin, remain, oneComp=0, i=0;

    while (temp != 0) {

        remain = temp%10;
        remain = (remain==1) ? 0:1;

        oneComp += remain*power(10, i);
        
        temp /= 10;
        ++i;

    }

    printf("One's Complement :: %d", oneComp);

    return 0;

}
