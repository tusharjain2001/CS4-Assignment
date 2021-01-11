#include <stdio.h>

float electricCost (float electricUnit) {
        
    float electricBill=0;

    if(electricUnit<=50)
        electricBill += electricUnit*(0.5);
    else {

        electricBill += 50*(0.5);
        electricUnit -= 50;

        if(electricUnit<=100)
            electricBill += electricUnit*(0.75);
        else {

            electricBill += 100*(0.75);
            electricUnit -= 100;

            if(electricUnit<=100)
                electricBill += electricUnit*(1.2);
            else {

                electricBill += 100*(1.2);
                electricUnit -= 100;

                if(electricBill>0)
                    electricBill += electricUnit*(1.5);

            }

        }
        
    }

    electricBill += electricBill*(.2);

    return electricBill;

}

int main (void) {

    float unit;

    printf("Enter [Unit] :: ");
    scanf("%f", &unit);

    printf("Electric Bill [Rupees] :: %.2f", electricCost(unit));

    return 0;
}