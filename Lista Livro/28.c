#include<stdio.h>
void main(){
    float kmPorLitro, DistanciaViagem, PrecoLitro;
    printf("Digite a quantidade de km rodado:");
    scanf("%f", &DistanciaViagem);
    printf("digite o valor do litro de combustivel: ");
    scanf("%f", &PrecoLitro);
    printf("digite quantos km eh possivel realizar por litro: ");
    scanf("%f", &kmPorLitro);
    printf("quantidade de litros gastos: %.2f\nvalor gasto em real: RS:.f \n", (DistanciaViagem/kmPorLitro), ((DistanciaViagem/kmPorLitro)*PrecoLitro));


}
