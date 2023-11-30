#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "hello";
    int len = strlen(str);

    char* front = &str[0];
    char* back = &str[len-1];
    while(front < back){
        char temp = *front;
        *front = *back;
        *back = temp;
        front++;
        back--;
    }
    printf("%s", str);

    return 0;
}