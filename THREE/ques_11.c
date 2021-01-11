#include <stdio.h>

int main (void) {

    char weekDay [7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int weekNum;

    printf("Enter [Week Number] :: ");
    scanf("%d", &weekNum);

    if(weekNum>=1 && weekNum<=7)
        printf("Week Day :: %s", weekDay[weekNum-1]);

    else
        printf("--Invalid Entry--");

    return 0;

}