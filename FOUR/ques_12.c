#include <stdio.h>

void even_odd (int i, int t) {

    if (i<=t) {

        if(i%2==0) {
            printf("- %d [Even] -", i);
            return even_odd(i+1, t);
        }

        else if(i%2!=0) {
            printf("- %d [Odd_] -", i);
            return even_odd(i+1, t);
        }

    }
    
}

int main (void) {
    
    int initial, terminate;

    printf("Enter [_Intial__] :: ");
    scanf("%d", &initial);
    printf("Enter [Terminate] :: ");
    scanf("%d", &terminate);

    even_odd(initial, terminate);

    return 0;

}