#include <stdio.h>

int main (void) {

    int amount;
    int cash[10][2] = {{2000, 0}, {500, 0}, {200, 0}, {100, 0}, {50, 0}, {20, 0}, {10, 0}, {5, 0}, {2, 0}, {1, 0}};

    printf("Enter [Amount] :: ");
    scanf("%d", &amount);

    int i=0;

    while (amount != 0) {

        cash[i][1] = (amount - amount%cash[i][0])/cash[i][0];
        amount = amount%cash[i][0];
        i++;

    }

    for(int j=0; j<10; j++) {

        if(j==0)
            printf("  --NOTE--\n");
        else if(j==7)
            printf("  --COIN--\n");

        printf("%dRs \t:: %d\n", cash[j][0], cash[j][1]);

    }

    return 0;

}