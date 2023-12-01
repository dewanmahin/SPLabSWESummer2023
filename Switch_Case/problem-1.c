#include <stdio.h>
int main()
{
    int n1, n2, n3; scanf("%d %d %d",&n1, &n2, &n3);
    int mx = n1;
    switch (1)
    {
    case 1:
        if(n2 > mx){
            mx = n2;
        }
    case 2:
        if(n3 > mx){
            mx = n3;
        }
        break;
    default:
        printf("Invalid!");
        break;
    }
    printf("The maximum number: %d\n", mx);

    return 0;
}