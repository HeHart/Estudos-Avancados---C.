#include <stdio.h>
void main()
{
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);

    C=A;
    A=B;
    B=C;
    printf("A: %.2f; B: %.2f", A, B);
}
