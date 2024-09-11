#include<stdio.h>
void main(){

    float N1, N2, N3, N4, MD, MD2, NE;
    printf("Digite o valor de N1: ");
    scanf("%f", &N1);
    printf("Digite o valor de N2: ");
    scanf("%f", &N2);
    printf("Digite o valor de N3: ");
    scanf("%f", &N3);
    printf("Digite o valor de N4: ");
    scanf("%f", &N4);

    MD = (N1+N2+N3+N4)/4;

    if(MD >= 7){
        printf("Aprovado\nMedia final: %.2f", MD);
    }
    else{
        printf("Digite o valor de NE: ");
        scanf("%f", &NE);
        MD2 = (MD + NE)/2;
        if(MD2>= 5){
            printf("Aprovado em exame\nMedia final: %.2f", MD2);
        }else {
            printf("Reprovado\nMedia final: %.2f", MD2);
        }
    }
}
