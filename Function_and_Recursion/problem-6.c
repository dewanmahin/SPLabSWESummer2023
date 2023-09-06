#include <stdio.h>
int even_odd_recursion(int i, int n){
    if(i > n) return 0;
    if(i%2 == 0) printf("Even: %d\n", i);
    else printf("Odd: %d\n", i);
    return even_odd_recursion(++i, n);
};
int main()
{
    int n = 12;
    int i = 1;
    even_odd_recursion(i, n);

    return 0;
}