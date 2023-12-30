#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);

    int sum = 0;
    while(x>0){
        sum = sum + (x%10);
        x = x/10;
    }

    printf("Sum of the digits of this number is: %d\n", sum);

    return 0;
}