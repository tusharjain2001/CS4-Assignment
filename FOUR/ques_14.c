#include <stdio.h>

int *even_odd (int i, int t) {

    static int sum[2] = {0, 0};

    if (i<=t) {

        if(i%2==0) {
            sum[0]+=i;
            return even_odd(i+1, t);
        }

        else if(i%2!=0) {
            sum[1]+=i;
            return even_odd(i+1, t);
        }

    }

    return sum;
    
}

int main (void) {
    
    int initial, terminate;

    printf("Enter [_Intial__] :: ");
    scanf("%d", &initial);
    printf("Enter [Terminate] :: ");
    scanf("%d", &terminate);

    int *sum = even_odd(initial, terminate);

    printf("Even [Sum] :: %d\n", *(sum+0));
    printf("Odd_ [Sum] :: %d\n", *(sum+1));

    return 0;

}