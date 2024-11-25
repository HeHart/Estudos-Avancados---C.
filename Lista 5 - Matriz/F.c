#include<stdio.h>
void main( ) {
    int A[5][4], B[5][4], i, j, k;

    for(i = 0; i <5; i++)
        for(j=0; j<4; j++)
            A[i][j] = i+j + i*(4);

    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++) {
            B[i][j] = A[i][j];
                for(k = A[i][j] - 1; k > 0; k--){
                    B[i][j]*= k;
                }
            }

    for(i = 0; i < 5; i++)
        for (j = 0; j<4; j++) {
            printf("[%d][%d] = %d! = %d\n", i, j, A[i][j], B[i][j]
            );
        }
}
