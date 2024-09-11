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
    SOMA = pow((A+B+C), 2);

    printf("O Quadrado das soma dos tres valores lidos eh: %d", SOMA);

} 