#include <stdio.h>
#include <limits.h>
int main()
{
    // find largest number using nested if
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int max = INT_MIN;

    if(x >= y){
        if(x >= z){
            max = x;
        }else{
            max = z;
        }
    }else{
        if(y >= z){
            max = y;
        }else{
            max = z;
        }
    }
    
    printf("Largest number: %d", max);


    return 0;
}