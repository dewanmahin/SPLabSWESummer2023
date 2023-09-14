#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);

    if(x >= y && x >= z){
        printf("Largest Number: %d", x);
    }else if(y >= x && y >= z){
        printf("Largest Number: %d", y);
    }else{
        printf("Largest Number: %d", z);
    }

    return 0;
}