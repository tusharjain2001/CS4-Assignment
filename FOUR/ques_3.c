#include <stdio.h>

int maxValue (int a, int b) {

    int max = (a>b) ? a:b;
    return max;

}

int minValue (int a, int b) {

    int min = (a>b) ? b:a;
    return min;

}

int main (void) {

    int n, m;
    printf("Enter Two Value [Separate by Comma] :: ");
    scanf("%d, %d", &n, &m);

    printf("Max Value :: %d\n", maxValue(n, m));
    printf("Min Value :: %d", minValue(n, m));

    return 0;

}