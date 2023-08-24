#include <stdio.h>
int main()
{
    int x, y; // assume, x = 12 & y = 5
    scanf("%d %d", &x, &y);

    int addition = x + y; // Output: 17
    int subtraction = x - y; // Output: 7
    int multiplication = x * y; // Output: 60
    int divisor = x / y; // Output: 2
    int remainder = x % y; // Output: 2
    
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivisor: %d\nRemainder: %d\n", addition, subtraction, multiplication, divisor, remainder);

    return 0;
}