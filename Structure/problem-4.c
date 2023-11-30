#include <stdio.h>
#include <math.h>
struct Point{
    int x;
    int y;
};
int main()
{
    struct Point p1, p2;

    printf("Enter coordinates for Point 1: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2: ");
    scanf("%d %d", &p2.x, &p2.y);

    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}