
#include<stdio.h>
void main() {
    int n, fat, j;
    printf("digite um valor para n: ");
    scanf("%d", &n);
    fat = n;

    for (j = (n-1); j>0; j--) {
        fat *= j;
    } 
    printf("%d", fat);
}