#include<stdio.h>
void main(){
    int pes;
    float PemM;

    // p = 30,48 cm ou 0,3048 m;
    printf("Digite quantos pes tem essa medida: ");
    scanf("%d", &pes);

    PemM = (float)pes * 0.3048;

    printf("Medida em metros: %.2f", PemM);
}
