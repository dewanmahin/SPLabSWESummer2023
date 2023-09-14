#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("It's an Alphabet");
    }else{
        printf("Not an Alphabet");
    }

    return 0;
}