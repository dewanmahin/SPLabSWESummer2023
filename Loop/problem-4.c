#include <stdio.h>
int main()
{
    int n; scanf("%d", &n);

    printf("Multiplication Table of %d\n", n);
    for(int i=1; i<=10; i++){
        int x = n * i;
        printf("%d x %d = %d\n", n, i, x);
    }

    return 0;
}