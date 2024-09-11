#include<stdio.h>
void main(){
    //Declarar variáveis 
    float DollarNow, USDT, USDTtoBRL;
    printf("Digite o valor atual do dolar: ");
    scanf("%f", &DollarNow);
    printf("Digite o valor em dolares a ser convertindo em reais: ");
    scanf("%f", &USDT);

    // Realização da conversão de valor de BRL para USD.
    USDTtoBRL = USDT*DollarNow;

    //Imprimir variável no display
    printf("Valor convertida em dolares: %.2f BRL", USDTtoBRL);

}