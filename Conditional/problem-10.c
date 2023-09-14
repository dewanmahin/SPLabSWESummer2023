#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x == y){
        printf("Equal\n");
    }else{
        printf("Not Equal\n");
    }

    return 0;
}