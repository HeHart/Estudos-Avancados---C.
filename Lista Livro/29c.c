#include<stdio.h>
void main(){
    float x1, x2;
    printf("digite o primeiro numero: ");
    scanf("%f", &x1);
    printf("digite o segundo numero:");
    scanf("%f", &x2);

    if((x1-x2) >= 0) {
        printf("%.2f eh maior ou igual a 0", (x1-x2));
    }
    else {
        printf("%.2f eh menor do que 0", x1-x2);
    }
}