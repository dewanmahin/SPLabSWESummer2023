#include <stdio.h>
// Symbolic Constants
#define PI 3.141592
#define MY_ID 232134003
int main()
{
    printf("%f\n", PI);
    printf("%d\n", MY_ID);

    printf("\n");

    // Constants
    const int int_const = 25;
    printf("%d\n", int_const);
    const float float_const = 15.66;
    printf("%0.2f\n", float_const);

    return 0;
}