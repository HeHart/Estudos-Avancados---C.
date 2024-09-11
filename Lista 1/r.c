#include<stdio.h>

int main() {
    int A, B, C, TV, N, W; /*não-binário, go next*/

    printf("Digite a quantidade de votos que o candidato A recebeu : ");
    scanf("%d", &A);
    printf("Digite a quantidade de votos que o candidato B recebeu : ");
    scanf("%d", &B);
    printf("Digite a quantidade de votos que o candidato C recebeu : ");
    scanf("%d", &C);
    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &W);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &N);

    TV = A + B + C + N + W;

    printf("Percentual de votos validos: %d%%\n", (A+B+C)*100/TV);

    printf("Percentual de votos candidato A: %d%%\n", A*100/TV);

    printf("Percentual de votos validos candidato B: %d%%\n", B*100/TV);

    printf("Percentual de votos candidato C: %d%%\n", C*100/TV);

    printf("Percentual de votos nulos: %d%%\n", N*100/TV);

    printf("Percentual de votos em branco: %d%%\n", W*100/TV);

    printf("Total de votos: %d", (int)TV);
}