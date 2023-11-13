#include <stdio.h>
int main()
{
    int r, c; scanf("%d%d", &r,&c);
    int ar[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* 
input-
3 3
1 2 3 4 5 6 7 8 9
output-
1 2 3 
4 5 6 
7 8 9 
 */