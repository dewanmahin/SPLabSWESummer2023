#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int len = 0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    printf("Length of the given string: %d", len);

    return 0;
}