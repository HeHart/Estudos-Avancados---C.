#include<stdio.h>
void main(){
    float s, d, sAnterior, sAtual;
    printf("digite o saldo anterior: ");
    scanf("%f", &sAnterior);
    printf("Deposito:");
    scanf("%f", &d);
    printf("saque:");
    scanf("%f", &s);

    sAtual = sAnterior + d - s;
    printf("saldo atual: R$.2%f", sAtual);
}


