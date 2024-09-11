#include<stdio.h>
void main() {
    float x;
    printf("digite um numero para x: "); 
    scanf("%f", &x);
    if(x==3) {
        printf("x eh equivalente a 3.");
    }
    else if(x>3) {
        printf("x eh maior que 3.");
    }
    else {
        printf("x eh menor que 3.");
    }
}