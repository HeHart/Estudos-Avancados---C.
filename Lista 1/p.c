#include<stdio.h>

int main() { 
    float SM, PR, NS;   

    printf("Digite o valor do SM: ");
    scanf("%f", &SM);
    printf("Valor do reajuste salarial (em porcentagem): ");
    scanf("%f", &PR);

    NS = SM + (SM*PR/100);

    printf("\nNovo salario: %.2f", NS);

}
