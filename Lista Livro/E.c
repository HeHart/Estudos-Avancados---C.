#include <stdio.h>
void main()
{
    float PRESTACAO, TAXA, VALOR, TEMPO;
    printf("digite o valor: ");
    scanf("%f", &VALOR);
    printf("Digite a taxa: ");
    scanf("%f", &TAXA);
    printf("Digite o tempo: ");
    scanf("%f", &TEMPO);

    PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO);

    printf("PRESTACAO: %.2f", PRESTACAO);
}
