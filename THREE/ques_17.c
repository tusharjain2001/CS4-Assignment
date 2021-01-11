#include <stdio.h>
#include <math.h>

int main (void) {

    float a, b, c;

    printf("Enter [a, b, c] :: ");
    scanf("%f, %f, %f", &a, &b, &c);

    printf("%.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);

   float D = (b*b) - (4*a*c);

    if(D>=0) {

        float r1 = (float) (-b + sqrt((double)D))/2*a;
        float r2 = (float) (-b - sqrt((double)D))/2*a;

        printf("Roots: %.2f, %.2f", r1, r2);
    }
    
    else if (D<0) {
        
        float real = (-b/2*a);
        float imag = (sqrt((double)-D)/2*a);
        
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi", real, imag, real, imag);
        
    }

    return 0;

}