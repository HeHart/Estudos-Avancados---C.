#include<stdio.h>
void main() {
    float l1, l2;
    printf("digite um lado de um retangulo:");
    scanf("%f", &l1);
    printf("digite um lado adjacente ao anterior: ");
    scanf("%f", &l2);
    if(l1==l2) {
        printf("eh um quadrado!");
    }
    else {
        printf("nao eh um quadrado!");
    }
}