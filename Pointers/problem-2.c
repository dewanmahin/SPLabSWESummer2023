#include <stdio.h>
void findLargest(int ar[], int sz) {
    int *ptr = ar;
    int max = *ptr;

    for (int i = 1; i < sz; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The largest element in the array is %d", max);
}
int main() {
    int sz; scanf("%d", &sz);
    int ar[sz];
    for(int i=0; i<sz; i++){
        scanf("%d", &ar[i]);
    }

    findLargest(ar, sz);

    return 0;
}