#include <stdio.h>
int main()
{
    int digits; // digits: 358
    scanf("%d", &digits);
    
    int firstNum = digits / 100; // firstNum: 3
    int lastNum = digits % 10; // lastNum: 8

    int firstSquare = firstNum * firstNum; // firstSquare: 9
    int lastSquare = lastNum * lastNum; // lastSquare: 64

    printf("First Number: %d\nLast Number: %d", firstSquare, lastSquare);

    return 0;
}