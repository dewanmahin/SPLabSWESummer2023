#include <stdio.h>
int main()
{
    int n, d; // for example: n=53, d=3;
    scanf("%d %d", &n, &d);
    // Quotient
    int quotient = n / d; // output: 17
    printf("Quotient: %d\n", quotient);
    // Remainder (without using modulus(%) operator)
    int k;
    for(int i=0; ; i++){
        if(i*d >= n){
            k = (i-1)*d;
            break;
        }
    }
    int remainder = n - k; // output: 2
    printf("Remainder: %d", remainder);

    return 0;
}