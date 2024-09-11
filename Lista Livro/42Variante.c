 #include<stdio.h>
 void main(){
    int crescente(int x, int y, int incremento) {
            do {
                printf("%d ", x);
                x+= incremento;
            } while (x <= y);
            printf("\n\n");
        }

    void decrescente(int x, int y, int incremento) {
        do {
            printf("%d ", x);
            x += incremento;
        } while (x >= y);
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