#include<stdio.h>
void main() {
    int A[7][7], B[7][7], i, j, k;
    for (i = 0; i<7; i++) {
        for (j = 0; j<7; j++) {
            A[i][j] = (i*7) + j;
            
            if ((i!=j) || (i%2)!=0) {
                B[i][j] = 0;
                for (k = 0; k <= A[i][j]; k++)
                    B[i][j] += k;
            } else if ((i%2) ==0) {
                B[i][j] = A[i][j];
                for(k = (A[i][j] - 1); k > 0; k--)
                    B[i][j] *= k;
            }
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

