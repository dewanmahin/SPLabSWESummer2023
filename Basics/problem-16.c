#include <stdio.h>
#include <ctype.h>
int main()
{
    // Transform small letter to capital letter using toupper() function
    char smallLetter;
    scanf("%c", &smallLetter);
    char capitalLetter = toupper(smallLetter);
    printf("%c", capitalLetter);

    return 0;
}