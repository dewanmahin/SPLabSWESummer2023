#include <stdio.h>
int findCube(int n){
    int cubeNum = n*n*n;
    return cubeNum; // returning the cube of a number
}
int main()
{
    int n = 2;
    int cubeNum = findCube(n); // function call
    printf("Cube of Number: %d", cubeNum);

    return 0;
}