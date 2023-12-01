#include <stdio.h>
int main()
{
    int n1, n2; scanf("%d %d", &n1, &n2);
    int op; scanf("%d", &op);

    switch(op){
        case 1:
            printf("%d + %d = %d", n1, n2, n1+n2);
            break;
        case 2:
            printf("%d - %d = %d", n1, n2, n1-n2);
            break;
        case 3:
            printf("%d * %d = %d", n1, n2, n1*n2);
            break;
        case 4:
            printf("%d / %d = %d", n1, n2, n1/n2);
            break;
        case 5:
            printf("%d %% %d = %d", n1, n2, n1%n2);
            break;
        default:
            printf("Error!");
    }

    return 0;
}