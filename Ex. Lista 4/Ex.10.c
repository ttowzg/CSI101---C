#include <stdlib.h>
#include <stdio.h>

int dado(){

    int num;
    
    num = (rand() % 6) + 1;


    return num;

}

int main (void) {

    int milhao = 10;

    int i, resultado, um = 0, dois = 0, tres = 0, quat = 0, cinc = 0, seis = 0;
    float media1, media2, media3, media4, media5, media6; 
    int contador = 0;

    for(i = 0; i <= milhao; i++){

    resultado = dado();
    printf("%d-", resultado);
    contador++;

    if (resultado == 1){
        um++;} else if (resultado == 2){
            dois++;
        } else if (resultado == 3) {
            tres++;
        } else if (resultado == 4) {
            quat++;
        } else if (resultado == 5) {
            cinc++; 
        } else if (resultado == 6) {
            seis++;
        }

    
    }

media1 = (float)um / contador*100;
media2 = (float)dois / contador*100;
media3 = (float)tres / contador*100;
media4 = (float)quat / contador*100;
media5 = (float)cinc / contador*100;
media6 = (float)seis / contador*100;

printf("\nA media que os numeros aparecem n1: %3.f", media1);
printf("\nA media que os numeros aparecem n2: %3.f", media2);
printf("\nA media que os numeros aparecem n3: %3.f", media3);
printf("\nA media que os numeros aparecem n4: %3.f", media4);
printf("\nA media que os numeros aparecem n5: %3.f", media5);
printf("\nA media que os numeros aparecem n6: %3.f", media6);

    

    return 0;
}