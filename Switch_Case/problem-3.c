#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);
    
    switch (n%2)
    {
    case 0:
        printf("Even!");
        break;
    default:
        printf("Odd!");
        break;
    }

    return 0;
}