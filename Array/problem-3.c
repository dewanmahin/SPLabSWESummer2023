#include <stdio.h>
#include <limits.h>
int main()
{
    int n; scanf("%d", &n);
    int ar[n];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);

        if(ar[i]>largest){
            largest = ar[i];
        }
        if(ar[i]<smallest){
            smallest = ar[i];
        }
    }
    printf("Largest: %d\nSmallest: %d", largest, smallest);

    return 0;
}
/* 
input-
8
30 50 10 20 60 40 80 70
output-
Largest: 80
Smallest: 10
 */