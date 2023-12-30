#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c; 
    float S, Area;

    printf("Enter the length of the first side of the triangle: \n");
    scanf("%d", &a);
    printf("Enter the length of the second side of the triangle: \n");
    scanf("%d", &b);
    printf("Enter the length of the third side of the triangle: \n");
    scanf("%d", &c);

    S = (a + b + c)  / 2.0;
    Area = sqrt(S*(S-a)*(S-b)*(S-c));

    printf("Area of the Traingle is: %0.4f square units\n", Area);
}