#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase Alphabet");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase Alphabet");
    }

    return 0;
}