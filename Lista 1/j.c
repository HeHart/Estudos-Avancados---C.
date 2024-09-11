#include<stdio.h>
void main(){

    int A, B, Qdiff; 
    printf("digite um numero para A: ");
    scanf("%d", &A);
    printf("digite um numero para B: ");
    scanf("%d", &B);

    Qdiff = ((A-B)*(A-B));
    printf("O quadrado da diferenca de A e B eh: %d", Qdiff);

}