#include<stdio.h>
void main() {
    int NUMBER;
    printf("digite um numero: ");
    scanf("%d", &NUMBER);
    int BIGGEST = NUMBER, LOWEST = NUMBER;

    while(NUMBER >= 0){ 
        printf("digite outro numero: ");
        scanf("%d", &NUMBER);
        if(NUMBER>BIGGEST)
            BIGGEST=NUMBER;
        if(NUMBER<LOWEST && NUMBER>=0)
            LOWEST = NUMBER;
    }
    printf("Maior numero digitado: %d\nMenor numero digitado: %d", BIGGEST, LOWEST);
}