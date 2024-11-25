#include<stdio.h>
void main(){
    float A[12], B[12], C[2][12];
    int j, i;

    for(j = 0; j<12; j++) {
        A[j] = j *(1);
        B[j] = (12+j)*(2);
        C[0][j] = A[j] * 2;
        C[1][j] = B[j] - 5;
    }
    for(i = 0; i<2; i++)
        for(j = 0; j < 12; j++) {
            printf("[%d][%d] = %.   %.2f\n", i, j, C[i][j]);
        }
}
