#include <stdlib.h>
#include <stdio.h>

int dado(){

    int num;
    
    srand((unsigned) time(NULL));
    num = (rand() % 6) + 1;


    return num;

}

int main (void) {

    int x, i, resultado;
    for(i = 0; i <=1; i++){

    resultado = dado(x);

    }

    printf("%d", resultado);

    return 0;
}