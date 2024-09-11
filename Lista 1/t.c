#include<stdio.h>
int main() {

    float VELOCIDADE, DISTANCIA, TEMPO;
    printf("Digite a distancia percorrida em KM: ");
    scanf("%f", &DISTANCIA);
    printf("Digite o tempo necessário em horas: ");
    scanf("%f", &TEMPO);

    VELOCIDADE = (DISTANCIA*1000)/(TEMPO*60);

    printf("Velocidade em m/s: %f m/s", VELOCIDADE);

}