#include<stdio.h>
void main(){
    int WHEAT = 1, GROW = 1;
    printf("fazenda estranha: ");
    for(int i = 1;i<=64; i++){
        GROW *= 2;
        printf("%d ", WHEAT);
        WHEAT += GROW;
    }
}