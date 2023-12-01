#include <stdio.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c);
    int ar[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum += ar[i][j];
        }
        printf("The sum of row %d is %d\n", i, sum);
    }

    return 0;
}