#include <stdio.h>
int main()
{
    int sz; scanf("%d", &sz);
    int ar[sz];
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }
    for(int i=sz-1; i>=0; i--){
        printf("%d\n", ar[i]);
    }

    return 0;
}