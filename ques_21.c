#include <stdio.h>

double num_pow (double n, double p) {

    double result=1;

    for (int i=0; i<p; i++)
        result *= n;

    return result;

}

int main (void) {

    double num, power;

    printf("Enter :: ");
    scanf("%lf", &num);
    printf("Power :: ");
    scanf("%lf", &power);

    printf("%.2lf ^ %.2lf = %.2lf", num, power, num_pow(num, power));

    return 0;

}