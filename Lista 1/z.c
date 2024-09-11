#include<stdio.h>
#include<math.h>

void main() {

    float A,B, HOLDER;
    printf("digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    HOLDER = pow(A, 2)/B;

    printf("Valor inteiro da divisão do quadrado de A por B = %d", (int)HOLDER);
}