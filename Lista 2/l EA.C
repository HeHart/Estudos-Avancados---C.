#include<stdio.h>
int main(){
    int N;
    printf("Digite um valor para N: ");
    scanf("%d", &N);

    if((N > 3) == false) {
        printf("%d nao eh maior que 3, logo, devo apresenta-lo.", N);
    }
}