#include<stdio.h>
void main(){
    float a, b, holder;
    scanf("%f", &a);
    scanf("%f", &b);

    holder = a;
    a = b;
    b = holder;

    printf("a = %.2f \nb = %.2f", a, b);
}
