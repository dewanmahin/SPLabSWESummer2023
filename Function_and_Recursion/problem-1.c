#include <stdio.h>
void even_odd(int n){
    if(n%2==0) printf("Even\n");
    else printf("Odd\n");
}
int main()
{
    int n = 53;
    even_odd(n); // function call

    return 0;
}