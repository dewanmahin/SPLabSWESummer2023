#include <stdio.h>
int main()
{
    // Post increment and decrement
    int i = 25, x;
        // increment
        x = 10 + i++; // 35
        printf("Post increment: %d\n", x);
        // decrement
        x = 10 + i--; // 36
        printf("Post decrement: %d\n", x);

    // Pre increment and decrement
    int j = 25, y;
        // increment
        y = 10 + ++j; // 36
        printf("Pre increment: %d\n", y);
        // decrement
        y = 10 + --j; // 35
        printf("Pre decrement: %d\n", y);

    return 0;
}