#include<stdio.h>
void main(){
    float x; 
    printf("digite um numero real nao nulo: ");
    scanf("%f", &x);
    
    if (x!=0){
        if(x>=1){
            printf("%.2f eh positivo!", x);
        }
        else{
            printf("%.2f eh negativo!", x);
        }
    }
    else {
        printf("%.0f eh nulo!", x);
    }
}