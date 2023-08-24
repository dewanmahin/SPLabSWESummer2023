#include <stdio.h>
int main()
{
    int x, y; // assume, x = 12 & y = 5
    scanf("%d %d", &x, &y);

    int addition = x + y; // 17
    int subtraction = x - y; // 7
    int multiplication = x * y; // 60
    int divisor = x / y; // 2
    int remainder = x % y; // 2
    
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivisor: %d\nRemainder: %d\n", addition, subtraction, multiplication, divisor, remainder);

    return 0;
}