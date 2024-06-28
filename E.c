#include <stdio.h>
void main()
{
    float TAXA, VALOR, TEMPO, PRESTACAO;
    printf("digite o valor: ");
    scanf("%f", &VALOR);
    printf("Digite a taxa em porcentagem: ");
    scanf("%f", &TAXA);
    printf("Digite o tempo: ");
    scanf("%f", &TEMPO);

    PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO);

    printf("PRESTACAO: %.2f", PRESTACAO);
}
