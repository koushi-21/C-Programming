#include <stdio.h>

int main(){
    int l, b, r, Peri, Area, Circ;

    printf("Enter length of the rectangle: \n");
    scanf("%d", &l);
    printf("Enter breadth of the rectangle: \n");
    scanf("%d", &b);
    
    Peri = 2 * (l+b);

    printf("Perimmeter of the rectangle is: %d\n", Peri);
    
    printf("-----------------------------------------\n");
    
    printf("Enter radius of the circle: \n");
    scanf("%d", &r);

    Area = (3.1428) * (r*r);
    Circ = 2 * (3.1428) * r;

    printf("Area of the circle is: %d\n", Area);
    printf("Circumference of the circle is: %d\n", Circ);

    return 0;
}