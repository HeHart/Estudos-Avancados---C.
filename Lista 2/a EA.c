#include<stdio.h>
void main(){

    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if(A > B){
        printf("Valor da subtracao eh: %d", A - B);
    } else{
        printf("O valor da subtracao eh: %d", B - A);
    }
}
