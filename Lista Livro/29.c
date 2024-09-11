#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int idade; 
    printf("digite sua idade: ");
    scanf("%i", &idade);

    if(idade >= 18) {
        printf("você é maior de idade!!!");
    }
    else {
        printf("você é menor de idade!!!");
    }
}