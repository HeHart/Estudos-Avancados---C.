#include<stdio.h>
int main() {
    float NUMBER, Q = 0, D;

    printf("digite o numero a ser dividido: ");
    scanf("%f", &NUMBER);
    printf("Digite o divisor: ");
    scanf("%f", &D);

    while((NUMBER-D)>=0){
        NUMBER -= D;
        Q++;
    }
    printf("Quociente de %.2f dividido por %.2f = %.2f\nResto: %.2f", NUMBER + D*Q, D, Q, NUMBER);
}