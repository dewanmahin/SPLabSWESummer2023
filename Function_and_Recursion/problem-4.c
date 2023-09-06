#include <stdio.h>
void swapNum(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 5, y = 10;
    printf("X: %d Y: %d\n", x, y); // Before swap
    swapNum(&x, &y); // function call
    printf("X: %d Y: %d\n", x, y); // After  swap

    return 0;
}