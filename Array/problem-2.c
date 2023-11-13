#include <stdio.h>
int main()
{
    int n; scanf("%d", &n); // numbers of array elements
    int ar[n]; // initializing an array
    for(int i=0; i<n; i++){ // scanning array elements
        scanf("%d", &ar[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++){ // finding sum of all elements
        sum += ar[i];
    }
    printf("%d", sum);

    return 0;
}
/* 
input- 
5
10 20 30 40 50
output-
150
 */