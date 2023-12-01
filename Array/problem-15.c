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
    int trans[c][r];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            trans[j][i] = ar[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}