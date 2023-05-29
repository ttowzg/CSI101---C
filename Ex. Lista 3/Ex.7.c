#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int num, posi = 0, nega = 0, soma = 0, percent1, percent2, contador = 0;
    float media;

    printf("Digite os numeros ate que zero seja mencionado:\n");

    while (num != 0) {

        scanf("%d", &num);
        soma += num;

        if (num > 0) {
            posi++;
        } else if(num < 0){
            nega++;
        }
            contador++;
            
            

    }
        media = (float)soma/contador;
        percent1 = (posi*100)/contador;
        percent2 = (nega*100)/contador;

    printf("\nA media desse numeros eh: %2.f.\nA quantidade de valores positivos e seu percentual eh: %d, %d porcento.\nA quantidade de valores negativos e seu percentual eh: %d, %d porcento.\n", media, posi, percent1, nega, percent2 );

    return 0;

}