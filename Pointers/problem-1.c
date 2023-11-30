#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d\nb = %d", a, b);

    return 0;
}