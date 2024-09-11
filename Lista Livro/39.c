#include<stdio.h>

void main() {
    int crescente(int x, int y) {
        while(x < y) {
            printf("%d, ", x);
            x++;
        }
        printf("%d \n\n", x);
    }

    void decrescente(int x, int y) {
        while(x > y) {
            printf("%d, ", x);
            x--;
        }
        printf("%d \n\n", x);
    }

    printf("1 ateh 50: ");
    crescente(1, 50);
    printf("50 ateh 1: "); 
    decrescente(50, 1);
    printf("50 ateh 100: ");
    crescente(50, 100);
    printf("-20 ateh 0: ");
    crescente(-20, 0);
}