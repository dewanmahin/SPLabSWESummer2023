#include <stdio.h>
int main()
{
    int sz, pos;
    scanf("%d%d", &sz, &pos);
    int ar[sz];
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<=pos; i++){
        int temp = ar[0];

        for(int j=0; j<sz; j++){
            ar[j] = ar[j+1];
        }

        ar[sz-1] = temp;
    }

    for(int i=0; i<sz; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}
/* 
input-
8 3
1 2 3 4 5 6 7 8
output-
5 6 7 8 1 2 3 4 
 */