#include<math.h>
#include<stdio.h>

void main(){ 
    int A, B, C, SOMA;
    printf("digite A: ");
    scanf("%d", &A);
    printf("digite B: ");
    scanf("%d", &B);
    printf("digite C: ");
    scanf("%d", &C);
    SOMA = pow(A, 2) + pow(B, 2) + pow(C, 2);

    printf("Soma dos quadrados dos numeros digitados eh: %d", SOMA);

} 