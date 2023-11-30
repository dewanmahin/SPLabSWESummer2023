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
    for(int i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }

    return 0;
}