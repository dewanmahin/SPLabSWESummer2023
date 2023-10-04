#include <stdio.h>
int fact(int n){
    if(n==1) return n; // Base case

    int f = fact(n-1); // Recursive call
    return f*n;
}
int main()
{
    int n;
    scanf("%d", &n);

    int factorial = fact(n);

    printf("Factorial of %d: %d", n, factorial);

    return 0;
}

// C program to find factorial of a number using recursion