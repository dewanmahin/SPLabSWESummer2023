#include <stdio.h>
#include <string.h>
int main()
{
    char certainChar, replaceChar;
    int len;
    scanf("%c %c %d", &certainChar, &replaceChar, &len);
    printf("%c %c %d\n", certainChar, replaceChar, len);

    getchar();

    char str[len];
    gets(str);
    for(int i=0; i<len; i++){
        if(str[i] == certainChar){
            str[i] = replaceChar;
        }
        printf("%c", str[i]);
    }
    
    return 0;
}
/* 
input:
l z 5
hello

Output:
hezzo
*/