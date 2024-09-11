#include<stdio.h>
void main(){
    int mes;
    printf("digite o mes em numero: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1: 
            printf("janeiro");
        break;
        case 2: 
            printf("fevereiro");
        break;
        case 3: 
            printf("Marco 0.");
        break;
        case 4: 
            printf("Abril");
        break;
        case 5: 
            printf("Maio");
        break;
        case 6: 
            printf("Junho");
        break;
        case 7: 
            printf("Julho");
        break;
        case 8: 
            printf("Agosto");
        break;
        case 9: 
            printf("Setembro");
        break;
        case 10: 
            printf("Outubro");
        break;
        case 11: 
            printf("Novembro");
        break;
        case 12: 
            printf("Dezembro");
        break;
        default: 
            printf("nao hah um mes correspondente :(");
        break;
    }
}