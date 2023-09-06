#include <stdio.h>
int numAddition(int x, int y){
    return x + y;
}
int numSubtraction(int x, int y){
    if(x>y) return x - y;
    return y - x;
}
int numMultiplication(int x, int y){
    return x * y;
}
int numDivision(int x, int y){
    if(x>y) return x / y;
    return y / x;
}
int numRemainder(int x, int y){
    return x % y;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    // calling functions for all arithmetic operations
    int addition = numAddition(x, y);
    int subtraction = numSubtraction(x, y);
    int multiplication = numMultiplication(x, y);
    int division = numDivision(x, y);
    int remainder = numRemainder(x, y);
    // Printing values
    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);
    printf("Remainder: %d\n", remainder);

    return 0;
}