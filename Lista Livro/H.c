#include<stdio.h>
void main () {
    float VOLUME, ALTURA,COMPRIMENTO,LARGURA;
    printf ("digite o comprimento:");
    scanf ("%f", &COMPRIMENTO);
    printf ("digite a altura :");
    scanf ("%f" , &ALTURA);
    printf ("digite a largura:");
    scanf ("%f" , &LARGURA);

    VOLUME = COMPRIMENTO*LARGURA*ALTURA;

    printf ("VOLUME:%.2f", VOLUME);




}
