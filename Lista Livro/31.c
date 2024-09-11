#include<stdio.h>
void main(){
    float n1, n2, n3, mF;
    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    printf("digite a nota 3: ");
    scanf("%f", &n3);

    mF = (2*n1+3*n2+5*n3)/10;
    if (mF>=7) {
        printf("o aluno estah aprovado com meehdia de:%.1f", mF);
    }
    else {
        printf("o aluno estah reprovado com a meehdia de: %.1f :(", mF);
    }
}