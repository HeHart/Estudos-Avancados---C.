#include<stdio.h>
void main() {
    int NUMBER, EXP, RESULT = 1;
    printf("digite o valor da base: ");
    scanf("%d", &NUMBER);
    printf("digite o valor do expoente: ");
    scanf("%d", &EXP);

    for(int i = 1; i<=EXP; i++) {
        RESULT *= NUMBER;
    }
    printf("%d ^ %d = %d\n", NUMBER, EXP, RESULT);
}