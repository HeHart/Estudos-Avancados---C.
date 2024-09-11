#include <stdio.h>

int main() {
    int x;
    printf("digite um nuhmero: ");
    scanf("%d", &x);

    if ((x % 2) == 0) {
        return;
    } else { 
        x++;
    }

    printf("proximos dez nuhmeros: ");
    for (int i = x + 2; i < x + 2 + 20; i += 2) {
        printf("%d ", i);
    }
}
