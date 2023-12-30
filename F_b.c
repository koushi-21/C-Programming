#include <stdio.h>

int main(){
    int x;
    printf("Enter the distance between two cities in two kilometres: \n");
    scanf("%d", &x);

    float m, ft, in, cm;

    m = x * 1000;
    ft = m * 3.28;
    in = ft * 12;
    cm = m * 100;


    printf("The distance in metres: %0.1f\n", m);
    printf("The distance in metres: %0.1f\n", ft);
    printf("The distance in metres: %0.1f\n",in);
    printf("The distance in metres: %0.1f\n", cm);

    return 0;
}