#include <stdio.h>
#include <limits.h>
int main()
{
    // find largest number using conditional operator;
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int max = INT_MIN;

    max = x > y ? x : y;
    max = max > z ? max : z;

    printf("Largest number: %d", max);


    return 0;
}