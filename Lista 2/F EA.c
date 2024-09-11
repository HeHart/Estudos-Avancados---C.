#include <stdio.h>

void main() {
    int A, B, C, X;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A > B) {
        X = B;
        B = A;
        A = X;
    }
    if (A > C) {
        X = C;
        C = A;
        A = X;
    }
    if (B > C) {
        X = C;
        C = B;
        B = X;
    }

    printf("Numeros em ordem crescente: %d - %d - %d", A, B, C);
}
