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
    
    int twoComp = oneComp + 1;
    i=0;
    
    temp = twoComp;
    remain = temp%10;
    
    while(temp != 0) {
        
        if (remain == 2) {
            
            twoComp -= 2*power(10, i);
            twoComp += power(10, i+1);
            
        }
        
        ++i;
        temp = twoComp/power(10, i);
        remain = temp%10;
        
    }
    

    printf("Two's Complement :: %d\n", twoComp);

    return 0;

}
