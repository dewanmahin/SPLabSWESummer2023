#include <stdio.h>
#include <limits.h>
int main()
{
    int sz; scanf("%d", &sz);
    int ar[sz];

    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }

    int first_L;
    int second_L;
    if(ar[0] > ar[1]){
        first_L = ar[0];
        second_L = ar[1];
    }else{
        first_L = ar[1];
        second_L = ar[0];
    }

    for(int i=2; i<sz; i++){
        if(ar[i] > first_L){
            second_L = first_L;
            first_L = ar[i];
        }else if(ar[i] > second_L && ar[i] != first_L){
            second_L = ar[i];
        }
    }


    printf("First Largest: %d\nSecond Largest: %d", first_L, second_L);

    return 0;
}
/* 
input-
8
3 5 8 4 2 1 7 6
output-
First Largest: 8
Second Largest: 7
 */