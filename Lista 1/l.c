
#include<stdio.h>
void main(){
    //Declarar variáveis 
    float DollarNow, BRL, BRLtoUSD;
    printf("Digite o valor atual do dolar: ");
    scanf("%f", &DollarNow);
    printf("Digite o valor em reais a ser convertindo em dolar: ");
    scanf("%f", &BRL);

    // Realização da conversão de valor de BRL para USD.
    BRLtoUSD = BRL/DollarNow;

    //Imprimir variável no display
    printf("Valor convertida em dolares: %.2f USD", BRLtoUSD);

}