#include <stdio.h>
int main()
{
    int n1; scanf("%d", &n1); // input: 10 + 2
    getchar();
    char operation; scanf("%c", &operation);
    int n2; scanf("%d", &n2);

    switch(operation){
        case '+':
            printf("%d %c %d = %d", n1, operation, n2, n1+n2);
            break;
        case '-':
            printf("%d %c %d = %d", n1, operation, n2, n1-n2);
            break;
        case '*':
            printf("%d %c %d = %d", n1, operation, n2, n1*n2);
            break;
        case '/':
            printf("%d %c %d = %d", n1, operation, n2, n1/n2);
            break;
        default:
            printf("Error!");
    }

    return 0;
}