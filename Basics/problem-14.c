#include <stdio.h>
int main()
{
    int asciiValue;
    scanf("%d", &asciiValue);
    char character = asciiValue; // Convert ascii value to character
    printf("%c", character);

    return 0;
}