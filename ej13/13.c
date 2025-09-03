#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int dice[] = {0,0,0,0,0,0};
    for (int i = 0; i < 60000000; i++) {
        int num = rand() % 6;  // Random numbers 0-99
        dice[num]=dice[num] + 1;
    }

    for(int i = 0;i<6;i++){
        printf("%i, ",dice[i]);
    }
    return 0;
}