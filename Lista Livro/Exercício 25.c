#include<stdio.h>
#include<math.h>


void main(){
    float a, b, c, delta, r1, r2;
    printf("digite um numero para a: ");
    scanf("%f", a);
    printf("digite um numero para b: ");
    scanf("%f", b);
    printf("digite um numero para c: ");
    scanf("%f", c);

     delta = (b*b) - (4*a*c);
        if( delta >= 0) {
            r1 =((-b) + sqrt(delta))/2*a;
            r2 =((-b) - sqrt(delta))/2*a;

            printf("o produto das raizes eh: %f \na soma das raizes eh: %f", r1*r2, r1+r2);
        } else {
            printf("o produto nao tem raizes reais");
    }
}
