#include <stdio.h>
struct Rectangle{
    float length;
    float width;
    float area;
};
int main()
{
    struct Rectangle myRectangle;
    scanf("%f %f", &myRectangle.length, &myRectangle.width);
    myRectangle.area = myRectangle.length * myRectangle.width;
    printf("Length:%0.2f Width:%0.2f\n", myRectangle.length, myRectangle.width);
    printf("Area:%0.2f", myRectangle.area);

    return 0;
}