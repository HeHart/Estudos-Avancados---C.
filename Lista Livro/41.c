#include<stdio.h>
void main(){ 
    void faSSaCres(int x, int y, int incremento){
        int i;
        for(i = x; i<= y; i+= incremento){
            printf("%d ", i);
        }
        printf("\n\n");
    }
    void faSSaDecres(int x, int y, int incremento){
        int i;
        for(i = x; i >= y; i+= incremento){
            printf("%d ", i);
        }
        printf("\n\n");
    }
    printf("a: ");faSSaCres(2, 10, 2);
    printf("b: ");faSSaCres(5, 50, 5);
    printf("c: ");faSSaDecres(10, -10, -1);
    printf("d: ");faSSaDecres(100, 0, -10);
}