#include<stdio.h>
#define S '+'
#define SUB '-'
#define M '*'
#define D '/'

int main() {
    int n1, n2;
    char operacao;

    printf("Que operacao deseja realizar? Operacoes possiveis: +, -, * e /\n Operacao escolhida:");
    scanf(" %c", &operacao); 
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if(n1!=0 && n2!=0){
        switch (operacao) {
            case S: 
                printf("n1 + n2 = %d\n", (n1 + n2));
            break;
            case SUB:
                printf("n1 - n2 = %d\n", (n1 - n2));
            break;
            case M:
                printf("n1 * n2 = %d\n", (n1 * n2));
            break;
            case D:
                printf("n1 / n2 = %d\n", (n1 / n2));
            break;
            default: 
                printf("Operacao invalida.\n");
            break;
        }
    }
}