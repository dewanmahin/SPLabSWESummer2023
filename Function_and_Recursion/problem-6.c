#include <stdio.h>
void even_odd_recursion(int i){
    if(i==13) return; // base case

    if(i%2 == 0)
    {
        printf("Even: %d\n", i);
    }
    else
    {
        printf("Odd: %d\n", i);
    }

    even_odd_recursion(i + 1);
};
int main()
{
    int i = 1;
    even_odd_recursion(i);

    return 0;
}