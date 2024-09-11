#include<stdio.h>
int main() {
    float V, RAIO;
    printf("Digite o valor do raio: ");
    scanf("%f", &RAIO);

    V = (4* 3.14159 * RAIO * RAIO * RAIO/3);
    printf("Volume: %.2f", V);
}