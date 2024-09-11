#include<stdio.h>
#include<math.h>

void main() {

    float I, B, R;
    printf("digite o valor da base: ");
    scanf("%f", &B);
    printf("Digite o valor do indice: ");
    scanf("%f", &I);

    R = pow(B, 1/I);

    printf("Raiz de %.2f com indice %.2f = %.2f ", B, I, R);
    
}