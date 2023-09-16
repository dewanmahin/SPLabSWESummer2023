#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? printf("It's an Alphabet") : printf("Not an Alphabet");

    return 0;
}