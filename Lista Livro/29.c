#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int idade; 
    printf("digite sua idade: ");
    scanf("%i", &idade);

    if(idade >= 18) {
        printf("voc� � maior de idade!!!");
    }
    else {
        printf("voc� � menor de idade!!!");
    }
}