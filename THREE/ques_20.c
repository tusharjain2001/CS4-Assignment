#include <stdio.h>

int main (void) {

    float basicSalary, grossSalary;

    printf("Enter [Basic Salary] :: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
        grossSalary = basicSalary + (basicSalary*0.2) + (basicSalary*0.8);
    else if (basicSalary <= 20000)
        grossSalary = basicSalary + (basicSalary*0.25) + (basicSalary*0.9);
    else
        grossSalary = basicSalary + (basicSalary*0.3) + (basicSalary*0.95);

    printf("Gross Salary :: %.2f", grossSalary);

    return 0;

}