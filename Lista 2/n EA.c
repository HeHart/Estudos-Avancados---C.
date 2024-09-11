#include<stdio.h>
int main() {
    int A, B, C;
    printf("digite um valor para A: ");
    scanf("%d", &A);
    printf("digite um valor para B: ");
    scanf("%d", &B);
    printf("digite um valor para C: ");
    scanf("%d", &C);
    int SUM = A + B + C;
    if(SUM >= 100) {
        printf("A soma de %d + %d + %d eh maior que 100, logo, devo apresenta-la: %d", A, B, C, SUM);
    }
}