#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1) return n; // Base case
    
    int f1 = fibo(n-1);
    int f2 = fibo(n-2);
    return f1 + f2;
}
int main()
{
    int num;
    scanf("%d", &num); 

    int nthFibo = fibo(num);
    printf("%d", nthFibo);

    return 0;
}