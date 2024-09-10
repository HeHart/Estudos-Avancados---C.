#include<stdio.h>
int main() {
    int Sum = 0;
    for (int i = 0 ; i < 200; i++){
        if ( i%2==0)  {
            Sum += i;
        }
     }
     printf("Valores pares de 1 a 200 somados eh: %d", Sum);
}