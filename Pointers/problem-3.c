#include <stdio.h>
void targetFrequency(char str[], char targetChar) {
    char *ptr = str;
    int cnt = 0;

    while (*ptr != '\0') {
        if (*ptr == targetChar) {
            cnt++;
        }
        ptr++;
    }

    printf("The character '%c' appears %d times in the string.\n", targetChar, cnt);
}

int main() {
    char str[100] = "hello world";
    char targetChar = 'l';
    targetFrequency(str, targetChar);

    return 0;
}
