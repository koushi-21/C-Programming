#include <stdio.h>

int main(){
    float F;
    float C;
    printf("Input the temperate of your city in Fahrenheit: \n");
    scanf("%f", &F);

    C = ((F - 32) * 5)/9;

    printf("Temperature if Celsius: %0.3f\n", C);
    return 0;
}