#include<stdio.h>
int main(){
    int NUMBER = 50, RESULT=0, TIMES=0, RANGE = 70;
    float MED;
    for (NUMBER = NUMBER; NUMBER <= RANGE; NUMBER++){
        if((NUMBER%2)==0){
            RESULT+=NUMBER;
            TIMES +=1;
        }
    }
    MED = (float)RESULT/TIMES;
    printf("Soma: %d\nMedia Aritmetrica: %.1f",RESULT, MED);
    return 0; 
}
