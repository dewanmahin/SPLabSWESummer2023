#include <stdio.h>
int main()
{
    int days; // assume, days = 420
    scanf("%d", &days);

    int years = days/365; // years = 1
    int weeks = (days%365)/7; // weeks = 7
    int remainingDays = (days%365)%7; // remainingDays = 6

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Remaining Days: %d\n", remainingDays);

    return 0;
}