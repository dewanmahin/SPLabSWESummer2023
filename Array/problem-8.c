#include <stdio.h>
int main()
{
    int sz; scanf("%d", &sz);
    int ar[sz];
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<sz; i++){
        for(int j=i+1; j<sz; j++){
            if(ar[i] == ar[j]){
                for(int k = j; k<sz-1; k++){
                    ar[k] = ar[k+1];
                }
                j--;
                sz--;
            }
        }
    }

    for(int i=0; i<sz; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}
/* 
input-
8
10 20 30 40 20 50 60 40
output-
10 20 30 40 50 60 
 */