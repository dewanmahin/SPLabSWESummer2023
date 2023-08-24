#include <stdio.h>
int main()
{
    int digits; // digits: 32
    scanf("%d", &digits);
    
    int firstNum = digits / 10; // firstNum: 3
    int lastNum = digits % 10; // lastNum: 2

    printf("%d%d", lastNum, firstNum);

    return 0;
}