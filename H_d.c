#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    printf("Enter the x-coordinate of the point:\n");
    scanf("%d", &x);
    printf("Enter the y-coordinate of the point:\n");
    scanf("%d", &y);

    int r,d;
    r = sqrt((x*x)+(y*y));
    d = atan(y/x);

    printf("The cartesian coordinates converted to polar coordinates are (%d,%d)\n", r,d);
    return 0;
}