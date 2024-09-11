#include <stdio.h>

int main() { 
    int N = 4;
    int SUM = 0, MULTI = 0;
    int NUM[4];


    printf("Digite A: ");
    scanf("%d", &NUM[0]);
    printf("Digite B: ");
    scanf("%d", &NUM[1]);
    printf("Digite C: ");
    scanf("%d", &NUM[2]);
    printf("Digite D: ");
    scanf("%d", &NUM[3]);

    for (int i = 0; i < N; i++) {
        if (i + 2 >= N) {
            break;
        }
        if (i % 2 == 0) {
            MULTI = NUM[i] * NUM[i + 2];
        } else {
            SUM = NUM[i] + NUM[i + 2];
        }
    }

    printf("Soma: %d\n", SUM);
    printf("Multiplicação: %d\n", MULTI);

}
