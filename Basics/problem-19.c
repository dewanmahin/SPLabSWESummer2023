#include <stdio.h>
int main()
{
    int days; // assume, days = 420
    scanf("%d", &days);

    int years = days/365; // years = 1
    int months = (days%365)/30; // months = 7
    int remainingDays = (days%365)%30; // remainingDays = 6

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Remaining Days: %d\n", remainingDays);

    return 0;
}