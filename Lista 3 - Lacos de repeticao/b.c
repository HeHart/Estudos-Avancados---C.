#include<stdio.h>
int main() {
    int F, N; 
    printf(" digite até que fator a tabuada deve chegar:  ");
    scanf("%d", &F);
    printf(" digite o valor do numero : "  );
    scanf("%d", &N);

    for (int i = 0 ; i <= F ; i++ ) { 
        printf("%d * %d = %d\n", N, i, N*i);
     }
}