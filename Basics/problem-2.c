#include <stdio.h>
int main()
{
    int x; float y; char c; double z;
    scanf("%d %f %c %lf", &x, &y, &c, &z);
    printf("%d\n%f\n%c\n%lf\n", x, y, c, z);

    return 0;
}