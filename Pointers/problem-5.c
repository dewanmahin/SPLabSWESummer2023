#include <stdio.h>
void strLen(char str[]) {
    char* ptr = &str[0];

    while(*ptr != '\0'){
        ptr++;
    }

    int length = ptr - &str[0];

    printf("The length of the string is %d\n", length);
}

int main() {
    char str[100] = "hello";
    strLen(str);

    return 0;
}
