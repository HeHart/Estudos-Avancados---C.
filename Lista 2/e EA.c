#include<stdio.h>
#include<math.h>
void main(){

    float A, B, C, R1, R2, D;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    D = pow(B, 2) - 4 * A * C;

    if(D > 0) {

        R1 = ((B*-1) + sqrt(D))/2*A;
        R2 = ((B*-1) - sqrt(D))/2*A;

        printf("Raiz 1 = %.2f\nRaiz 2 = %.2f", R1, R2);

    } else if(D == 0) {
        R1 = ((B*-1) + sqrt(D))/2*A;
        R2 = R1;
        printf("Ha apenas uma raiz real \nRaiz =%.2f", R1);
    } else {
        printf("Nao ha raizes reais :(");
    }

}
