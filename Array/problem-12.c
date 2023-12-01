#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c);
    int ar[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int res[3] = {INT_MIN, 0, 0};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(ar[i][j] > res[0]){
                res[0] = ar[i][j];
                res[1] = i+1;
                res[2] = j+1;
            }
        }
    }

    printf("The largest element in the array is %d at position (%d,%d)", res[0], res[1], res[2]);

    return 0;
}