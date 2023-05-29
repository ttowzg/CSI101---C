#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int Dado(){

int num = (rand() % 6) + 1;

    return num; 

}

int main(void) {

    int i;
    int milhao = 10;
    int resultado;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;
    int contador = 0;
    float media1, media2, media3, media4, media5, media6;
    

    for(i = 0; i < milhao; i++){

        resultado = Dado();
        contador++;
        printf("%d-", resultado);

        if (resultado == 1) { 
            n1++;
        } 
        else if (resultado == 2) { 
            n2++;
        } 
        else if (resultado == 3) { 
            n3++;
        } 
        else if (resultado == 4) { 
            n4++;
        } 
        else if (resultado == 5) { 
            n5++;
        } 
        else if (resultado == 6) { 
            n6++;
        } 
    }

    media1 = (float)n1/contador*100;
    media2 = (float)n2/contador*100;
    media3 = (float)n3/contador*100;
    media4 = (float)n4/contador*100;
    media5 = (float)n5/contador*100;
    media6 = (float)n6/contador*100;
    

    printf("\nA porcentagem de numeros:\n1 - %.2f\n2 - %.2f\n3 - %.2f\n4 - %.2f\n5 - %.2f\n6 - %.2f", media1,media2,media3,media4,media5,media6);


    



    return 0;
}
