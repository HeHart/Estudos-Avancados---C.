#include<stdio.h>

void main()
{
    int addAB, addAC, addAD, addBC, addBD, addCD;
    int mulAB, mulAC, mulAD, mulBC, mulBD, mulCD;
    int A, B, C, D;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    printf("Informe o valor de C: ");
    scanf("%d", &C);
    printf("Informe o valor de D: ");
    scanf("%d", &D);

    addAB = A + B;
    addAC = A + C;
    addAD = A + D;
    addBC = B + C;
    addBD = B + D;
    addCD = C + D;

    mulAB = A * B;
    mulAC = A * C;
    mulAD = A * D;
    mulBC = B * C;
    mulBD = B * D;
    mulCD = C * D;

    printf("A + B = %d\n", addAB);
    printf("A + C = %d\n", addAC);
    printf("A + D = %d\n", addAD);
    printf("B + C = %d\n", addBC);
    printf("B + D = %d\n", addBD);
    printf("C + D = %d\n", addCD);

    printf("MULTIPLICACAO \n");
    
    printf("A * B = %d\n", mulAB);
    printf("A * C = %d\n", mulAC);
    printf("A * D = %d\n", mulAD);
    printf("B * C = %d\n", mulBC);
    printf("B * D = %d\n", mulBD);
    printf("C * D = %d\n", mulCD);    
}
