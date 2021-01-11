#include <stdio.h>

float mod (float d) {

    if (d<0)
        return -d;
    
    return d;

}

int main (void) {

    float actualCost, sellingCost;

    printf("Enter [Actual Cost] :: ");
    scanf("%f", &actualCost);

    printf("Enter [Selling Cost] :: ");
    scanf("%f", &sellingCost);

    float diff = sellingCost - actualCost;
    float per = mod(diff*100);

    if(diff>0)
        printf("Profit :: %.2f[%.2f%%]", diff, per);
    else if (diff<0)
        printf("Loss :: %.2f[%.2f%%]", diff, per);
    else
        printf("Non :: %.2f[%.2f%%]", diff, per);

    return 0;

}