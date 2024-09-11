#include<stdio.h>
void main() {
      void crescente(int x, int y, int incremento){
        while(x <= y) {
            printf("%d ", x);
            x += incremento;
        }
        printf("\n\n");
    }
    void decrescente(int x, int y, int incremento) {
        while(x >= y) {
            printf("%d ", x);
            x += incremento;
        }
        printf("\n\n");
    }
    printf("A: ");
    crescente(2, 10, 2);
    printf("B: ");
    crescente(5 , 50, 5);
    printf("C: ");
    decrescente(10, -10, -1);
    printf("D: ");
    decrescente(100, 0, -10);
}