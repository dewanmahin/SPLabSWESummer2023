#include <stdio.h>
int main()
{
    // pattern A
    int n; scanf("%d", &n);
    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            printf("*");
        }
        printf("\n");
        k++;
    }

    // patter B
    int n; scanf("%d", &n);
    int s=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<s) printf(" ");
            else printf("*");
        }
        printf("\n");
        s++;
    }

    // pattern C
    int n; scanf("%d", &n);
    int k=n;
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            printf("*");
        }
        printf("\n");
        k--;
    }

    // patter D
    int n; scanf("%d", &n);
    int s=n-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<s) printf(" ");
            else printf("*");
        }
        printf("\n");
        s--;
    }

    // patter E
    int n, s, k;
    scanf("%d", &n);
    s=0;
    k=n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(j!=0){
                printf(" ");
            }
        }
        for(int j=k; j>=1; j--){
            printf("* ");
        }
        s++;
        k--;
        printf("\n");
    }

    // patter F
    int n, s, k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }

    // pattern A'
    int m; scanf("%d", &m);
    int k=1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=k; j++){
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }

    // patter B'
    int m; scanf("%d", &m);
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i; j++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    // patter C'
    int m; scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int n = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}