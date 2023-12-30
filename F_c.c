#include <stdio.h>

int main(){
    printf("Please input the marks [Max 100] obtained by the student in each of the subjects below:\n");
    int M, S, SS, E, H;

    scanf("%d\n", &M);
    scanf("%d\n", &S);
    scanf("%d\n", &SS);
    scanf("%d\n", &E);
    scanf("%d", &H);

    int Agg_Sum = M + S + SS + E + H;
    printf("Aggregate marks: %d\n", Agg_Sum);
    printf("Percentage marks obtained: %d\n", Agg_Sum/5);

    return 0;

}