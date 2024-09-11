#include<stdio.h>

int main() {
    float A, B, SUM, DIVISION, MULTIPLICATION, SUBTRACTION;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    SUM = A + B;
    DIVISION = A / B;
    MULTIPLICATION = A * B;
    SUBTRACTION = A - B;

    printf("A + B :%d \nA - B: %d\nA * B: %d\nA / B: %d\n", SUM, SUBTRACTION, MULTIPLICATION, DIVISION);
}


