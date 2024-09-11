#include<stdio.h>
void main(){
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("\n");
    if (N % 2 == 0) { 
        printf("POLICE: %d eh par", N);
    } else {
        printf("POLICE: %d eh impar\n", N);
    }
    
}