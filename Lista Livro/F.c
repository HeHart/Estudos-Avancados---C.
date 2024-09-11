#include <stdio.h>
void main()
{
    float A,B,X;
    scanf("%f", &A);
    scanf("%f", &B);

    X=A;
    A=B;
    B=X;
    printf("A: %2.f; B: %2.f", A, B);
}
