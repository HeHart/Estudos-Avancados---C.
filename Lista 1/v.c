#include<stdio.h>
#include<math.h>

void main() {

    float P,B, E;
    printf("digite o valor da base: ");
    scanf("%f", &B);
    printf("Digite o valor do expoente: ");
    scanf("%f", &E);

    P = pow(B, E);

    printf("%.2f ^ %.2f = %.2f", B, E, P);
    
}