#include<stdio.h>
int main() {
    int A, B, C, D, MAIOR, MENOR;
    printf("digite um valor para A: ");
    scanf("%d", &A);
    printf("digite um valor para B: ");
    scanf("%d", &B);
    printf("digite um valor para C: ");
    scanf("%d", &C);
    printf("digite um valor para D: ");
    scanf("%d", &D);

    int vet[4] = {A, B, C, D};

    for (int i = 0; i < 4; i++) {
        if (vet[i] >= A && vet[i] >= B && vet[i] >= C && vet[i] >= D) {
            MAIOR = vet[i];
        } 
        if(vet[i] <= A && vet[i] <= B && vet[i] <= C && vet[i] <= D) {
            MENOR = vet[i];
        }
    }
    printf("\nMaior numero inserido: %d\nMenor numero inserido: %d", MAIOR, MENOR);
}