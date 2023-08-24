#include <stdio.h>
#include <ctype.h>
int main()
{
    // Transform capital letter to small letter using tolower() function
    char capitalLetter;
    scanf("%c", &capitalLetter);
    char smallLetter = tolower(capitalLetter);
    printf("%c", smallLetter);

    return 0;
}