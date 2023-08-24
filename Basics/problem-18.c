#include <stdio.h>
int main()
{
    // Transform small letter to capital letter

    char smallLetter;
    scanf("%c", &smallLetter);
    
    char capitalLetter = smallLetter - 32;
    printf("%c", capitalLetter);

    return 0;
}