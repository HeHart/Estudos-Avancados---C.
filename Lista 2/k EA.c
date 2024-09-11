#include<stdio.h>
void main(){
    int F;
    printf("digite o vaor da faixa: ");
    scanf("%d", &F);

    if(F > 0 && F < 10) {
        printf("O valor esta dentro da faixa permitida");
    } else {
        printf("O valor esta fora da faixa permitida");
    }
}
