#include<stdio.h>
void main() {
    float nota;
    printf("digite sua nota:");
    scanf("%f", &nota);

    if(nota>9) {
        printf("conceito: A");
    }
    else if(nota>7) {
        printf("conceito: B");
    }
    else if(nota>5) {
        printf("conceito: C");
    }
    else if(nota>3) {
        printf("conceito: D");
    }
    else {
        printf("conceito: F");
    }
}