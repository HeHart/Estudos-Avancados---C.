#include<stdio.h>
void main() {
    float altura, massa, imc;
        printf("digite seu 'peso' em kg: ");
        scanf("%f", &massa);
        printf("digite sua altura em metros:");
        scanf("%f", &altura);
        imc = massa/(altura*altura);
        if( imc>=18,5 && imc < 25) {
            printf("Sua situacao eh normal com imc equivalente ahh %.2f", imc);
        } 
        else if ((imc>=25) && (imc < 30)){
             printf("Sua situacao eh de sobrepeso com imc equivalente ahh %.2f", imc);
        }
        else if ((imc>=30) && (imc < 35)){
             printf("Sua situacao eh de obesidade grau 1 com imc equivalente ahh %.2f", imc);
        }
        else if ((imc>=35) && (imc < 40)){
             printf("Sua situacao eh de obesidade grau 2 com imc equivalente ahh %.2f", imc);
        }
        else if(imc >= 40) {
            printf("no tengo instrucoes");
        }
        else {
            printf("voce estah abaixo do peso ideal com imc de %.2f", imc);
        }
}