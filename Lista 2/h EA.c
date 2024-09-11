#include<stdio.h>
int main() {
    int A, B, C, D; 
    printf("digite um valor para A: ");
    scanf("%d", &A);
    printf("digite um valor para B: ");
    scanf("%d", &B);
    printf("digite um valor para C: ");
    scanf("%d", &C);
    printf("digite um valor para D: ");
    scanf("%d", &D);
    int HOLDER[4] = {A, B, C, D};
    
    printf("\nNumeros divisiveis por 2 e 3: ");
    for(int i = 0; i < 4; i++) {
        if((HOLDER[i] % 2 == 0) || (HOLDER[i] % 3 == 0))
        printf("%d ", HOLDER[i]);
    }
}