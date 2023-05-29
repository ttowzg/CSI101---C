#include <stdio.h>

int main (void){

    int i;
    int joao = 120, pedro = 130;
    int centjoao = 4, centpedro = 3;
    int contador = 0;

    while (pedro >= joao){

        joao += centjoao;
        pedro += centpedro;
        contador++;

    }



    printf("\nvai demorar %d anos" , contador );



    return 0;
}