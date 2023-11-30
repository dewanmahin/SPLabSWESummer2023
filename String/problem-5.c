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
    int i=0, j=len-1;
    while(i<j){
        if(str[i] != str[j]){
            printf("No, it is not a palindrome.\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Yes, it is a palindrome.\n");

    return 0;
}