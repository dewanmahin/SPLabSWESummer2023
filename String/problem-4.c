#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}