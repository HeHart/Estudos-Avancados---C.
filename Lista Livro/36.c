#include<stdio.h>
void main() {
    float vP, p; 
    printf("digite o valor do produto: ");
    scanf("%f", &vP);
    printf("digite o pagamento: ");
    scanf("%f", &p);

    if(p >= vP) {
        printf("O dinheiro eh suficiente para pagar o produto. \nTroco: RS%.2f", (p - vP));
    }
    else {
        printf("O dinheiro disponiivel nao eh suficiente para comprar o produto");
    }
}