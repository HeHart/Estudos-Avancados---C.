#include<stdio.h>
int main() {
    int x[185];
    for ( int i = 0; i <=185; i++) {
        x[i] = (15+i)*(15+i) ;
        printf("%d  ^ 2 = %d \n", (15+i), x[i]);
    }
}