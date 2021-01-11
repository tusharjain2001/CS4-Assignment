#include <stdio.h>

const int PIE = 3.14;

void circleProp (float r) {

    float diameter, circumference, area;

    diameter = 2*r;
    circumference = diameter*PIE;
    area = r*r*PIE;

    printf("Diameter       :: %.2f\n", diameter);
    printf("Circumference  :: %.2f\n", circumference);
    printf("Area           :: %.2f", area);

}

int main (void) {

    float radius;

    printf("Enter [Radius] :: ");
    scanf("%f", &radius);

    circleProp(radius);

    return 0;

}