#include <stdio.h>
int main()
{
    int sz; scanf("%d", &sz);
    int ar[sz];
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }
    int freq[10] = {0};
    for(int i=0; i<sz; i++){
        freq[ar[i]]++;
    }
    for(int i=0; i<=9; i++){
        if(freq[i] != 0){
            printf("Frequency of %d: %d\n", i, freq[i]);
        }
    }

    return 0;
}
/* 
input-
10
2 1 3 3 5 3 1 6 3 5
output-
Frequency of 1: 2
Frequency of 2: 1
Frequency of 3: 4
Frequency of 5: 2
Frequency of 6: 1
 */