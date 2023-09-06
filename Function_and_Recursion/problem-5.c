#include <stdio.h>
int sumOfN(int n, int sum){
    if(n == 0) return sum;
    sum += n;
    return sumOfN(--n, sum);
}
int main()
{
    int n = 5;
    int sum = 0;
    int total = sumOfN(n, sum);
    printf("Sum of natural numbers: %d", total); // output: 10

    return 0;
}