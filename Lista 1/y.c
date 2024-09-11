#include<stdio.h>
#include<math.h>

void main() {

    int N, S, A; // nsa.

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    S = N + 1;
    A = N - 1;
    
    printf("Sucessor: %d\nAntecessor: %d", S, A);
}