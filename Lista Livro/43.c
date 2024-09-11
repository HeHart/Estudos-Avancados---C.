#include<stdio.h>

void main() {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Proximos 10 numeros: ");
    for(int i = x + 1; i <= x + 10; i++) {
        printf("%d ", i);
    }
}
