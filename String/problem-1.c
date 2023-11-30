#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "Hello";
    
    if(strcmp(str1, str2) == 0) printf("Equal!\n");
    else printf("Not Equal!\n");

    return 0;
}