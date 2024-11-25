#include<stdio.h>
void main() {
    int A[5][5], B[5][5], i, j;
    for (i = 0; i<5; i++) {
        for (j = 0; j<5; j++) {
            A[i][j] = (i+1) * j;

            if ((i!=j)) {
                B[i][j] = A[i][j]*2;
            } else {
                B[i][j] = A[i][j] * 3;
            }
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i<5; i++)
        for (j = 0; j<5; j++) {

        }


}
