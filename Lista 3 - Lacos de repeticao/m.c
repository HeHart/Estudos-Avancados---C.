#include<stdio.h>
void main() {
    int NUMBER, SUM=0, AVERAGE, i;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &NUMBER);
        SUM += NUMBER;
    }
    AVERAGE = SUM/i;
    printf("Somatorio: %d\nMedia: %d", SUM, AVERAGE);
}