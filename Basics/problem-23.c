#include <stdio.h>
int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int k;
    for(int i=0; ; i++){
        if(i*d >= n){
            printf("%d\n", i);
            k = (i-1)*d;
            break;
        }
    }
    int remainder = n - k;
    printf("%d", remainder);

    return 0;
}