#include<stdio.h>

int main() {
    float R, A;
    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    A = 3.14159265 * R * R;

    printf("\n A area do circuferencia eh: %.2f", A);

}