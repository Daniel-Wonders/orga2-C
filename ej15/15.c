#include <stdio.h>
#include <stdbool.h>
int factorial(int num);

int main(void){

    while(true){
        int n;
        printf("Ingrese un numero: ");
        scanf("%i", &n);
        int deUno = factorial(n);
        printf("%i\n",deUno);
}

    return 0;
}


int factorial(int num){

    int res = 1;

    for(int i = 1; i<= num;i++){
        res = (res * i);
    }

    return res;

}