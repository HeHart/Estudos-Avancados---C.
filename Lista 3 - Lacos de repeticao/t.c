#include<stdio.h>
void main() {
    int NUMBER;
    for (NUMBER=15; NUMBER<=200;NUMBER+=3)
        printf("%d ^ 2 = %d\n", NUMBER, NUMBER*NUMBER);
}