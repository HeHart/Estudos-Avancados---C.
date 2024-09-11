#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main(){
    char NAME[50], SEX;
    printf("NOME: ");
    fgets(NAME, 50, stdin);
    printf("Sexo: ");
    scanf("%c", &SEX);

    if(toupper(SEX) == 'M') {
        printf("llmo. Sr %s", NAME);
    } else if (toupper(SEX) == 'F') {
        printf("ilmo. Sra %s", NAME);
    } else {
        printf("Sexo informado invalido"); // achei q faltou inclusividade :/ 
    }
}