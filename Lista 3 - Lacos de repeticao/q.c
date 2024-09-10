#include<stdio.h> 
#include<ctype.h>

int main() {
    char ROOM[50];
    char ANSWER[4]; 
    float WIDTH, HEIGHT, TOTAL = 0;

    do {
        printf("Digite o nome do comodo: ");
        scanf("%s", ROOM);

        printf("Digite o comprimento do comodo: ");
        scanf("%f", &HEIGHT);

        printf("Digite a largura do comodo: ");
        scanf("%f", &WIDTH);

        printf("Area do comodo: %.2f\nDeseja continuar? \nResposta (SIM/NAO): ", HEIGHT * WIDTH);
        TOTAL += HEIGHT * WIDTH;

    
        while (getchar() != '\n');

    
        scanf("%3s", ANSWER); 
    } while (tolower(ANSWER[0]) != 'n' && tolower(ANSWER[1]) != 'a' && tolower(ANSWER[2]) != 'o');

    printf("Area total = %.2f\n", TOTAL);

}
