#include <stdio.h>
int main()
{
    // Celsius to fahrenheit
    float celsius;
    scanf("%f", &celsius);

    float fahrenheit = (celsius*9/5) + 32;
    printf("%.1f", fahrenheit);

    return 0;
}
