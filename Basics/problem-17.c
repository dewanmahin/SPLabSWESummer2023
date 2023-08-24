#include <stdio.h>
int main()
{
    // Transform capital letter to small letter

    char capitalLetter;
    scanf("%c", &capitalLetter);
    
    char smallLetter = capitalLetter + 32;
    printf("%c", smallLetter);

    return 0;
}