#include <stdio.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c);
    int ar1[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar1[i][j]);
        }
    }
    int ar2[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar2[i][j]);
        }
    }

    int multi[r][c];
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            for(int k=0; k<c; k++){
                sum += ar1[i][k] * ar2[k][j];
            }
            multi[i][j] = sum;
            sum=0;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}