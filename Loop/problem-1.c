#include <stdio.h>
int main()
{
    int range;
    scanf("%d", &range);

    // for loop
    printf("For loop: ");
    for(int i=1; i<=range; i++){
        if(i%2 == 0) printf("%d ", i);
    }
    printf("\n");

    // while loop
    printf("While loop: ");
    int i=1;
    while(i<=range){
        if(i%2 == 0) printf("%d ", i);
        i++;
    }
    printf("\n");

    // do...while loop
    printf("do...While loop: ");
    int j=1;
    do{
        if(j%2 == 0) printf("%d ", j);
        j++;
    }while(j<=range);

    return 0;
}