#include<stdio.h>
void main () {
    float ALTURA,COMPRIMENTO,LARGURA;
    printf ("digite a largura:");
    scanf ("%f" , &LARGURA);
    printf ("digite a altura :");
    scanf ("%f" , &ALTURA);
    printf ("digite o comprimento:");
    scanf ("%f", &COMPRIMENTO);
    float VOLUME = COMPRIMENTO*LARGURA*ALTURA;

    printf ("VOLUME:%.2f", VOLUME);




}
