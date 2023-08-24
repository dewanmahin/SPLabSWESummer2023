#include <stdio.h>
int main()
{
    int digits; // digits: 358
    scanf("%d", &digits);
    
    int firstNum = digits / 100; // firstNum: 3
    int lastNum = digits % 10; // lastNum: 8

    int sum = firstNum + lastNum; // sum: 11
    printf("%d", sum);

    return 0;
}