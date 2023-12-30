#include <stdio.h>

int main(){
    int x;
    int reverse = 0;
    int remainder;

    printf("Enter a five-digit number: \n");
    scanf("%d", &x);

    if(x > 99999){
        printf("The number is not a five digit number.\n");
    }
    else if(x < 10000){
        printf("The number is not a five digit number.\n");
    }
    else{
        while (x != 0) {
            remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x /= 10;
        }
    printf("Reversed number = %d", reverse);
    }
    
    return 0;
}