#include<stdio.h>

void main()
{
    int sumAB, sumAC, sumAD, sumBC, sumBD, sumCD;
    int prodAB, prodAC, prodAD, prodBC, prodBD, prodCD;
    int numA, numB, numC, numD;

    printf("Digite o valor de A: ");
    scanf("%d", &numA);
    printf("Digite o valor de B: ");
    scanf("%d", &numB);
    printf("Digite o valor de C: ");
    scanf("%d", &numC);
    printf("Digite o valor de D: ");
    scanf("%d", &numD);

    sumAB = numA + numB;
    sumAC = numA + numC;
    sumAD = numA + numD;
    sumBC = numB + numC;
    sumBD = numB + numD;
    sumCD = numC + numD;

    prodAB = numA * numB;
    prodAC = numA * numC;
    prodAD = numA * numD;
    prodBC = numB * numC;
    prodBD = numB * numD;
    prodCD = numC * numD;

    printf("A + B = %d\n", sumAB);
    printf("A + C = %d\n", sumAC);
    printf("A + D = %d\n", sumAD);
    printf("B + C = %d\n", sumBC);
    printf("B + D = %d\n", sumBD);
    printf("C + D = %d\n", sumCD);

    printf("\n ------------MULTIPLICACAO------------\n\n");
    
    printf("A * B = %d\n", prodAB);
    printf("A * C = %d\n", prodAC);
    printf("A * D = %d\n", prodAD);
    printf("B * C = %d\n", prodBC);
    printf("B * D = %d\n", prodBD);
    printf("C * D = %d\n", prodCD);    
}
