#include<stdio.h>
void main(){

    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if(N < 0){
        N = N*-1;
    }
    printf("O valor positivo de N eh: %d", N);
}
