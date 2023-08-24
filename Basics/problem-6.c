#include <stdio.h>
int main()
{
    int hr, min; // for example: hr = 2, min = 30
    scanf("%d %d", &hr, &min);
    
    int hrToMin = hr*60; // converting hour to minutes.
    int totalMin = hrToMin + min; // Output: 150

    printf("Total Minutes: %d", totalMin); 

    return 0;
}