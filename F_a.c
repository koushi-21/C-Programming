#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter your salary below: \n");
    scanf("%d", &x);

    y = 0.4 * x;
    z = 0.2 * x;

    int Ga = x + y + z;

    printf("Your gross salary is %d\n", Ga);
    return 0;
}