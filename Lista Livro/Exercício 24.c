#include<stdio.h>
void main(){
    float F, C;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    printf("Temperatura em Celsius: %.2f", (F-32) * 5/9);
}



