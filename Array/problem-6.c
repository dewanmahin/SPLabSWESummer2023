#include <stdio.h>
#include <stdbool.h>
int main()
{
    int sz; scanf("%d", &sz);
    int ar[sz];
    int target; scanf("%d", &target);
    bool flag = 0;
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<sz; i++){
        if(ar[i] == target){
            flag = 1;
            break;
        }
    }
    flag ? printf("Found the element.\n") : printf("Didn't found the element.\n");

    return 0;
}
/* 
input-
8 15
13 2 40 32 25 15 96 65
output-
Found the element.
*/