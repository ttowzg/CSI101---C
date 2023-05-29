#include <stdio.h>
#include <stdlib.h>

void strinv(char str[]){

    int i;
    char copia[99];
    int tamanho = strlen(str);


    for(i = 0; i < tamanho; i++){

        copia[i] = str[tamanho - i - 1];

    }

    for ( i = 0; i <tamanho; i++){
        printf("%c", copia[i]);
    }

}


int main(void) {

    char string[99];

    printf("digite algo nao tao grande: ");
    gets(string);

    printf("voce digitou: ");
    puts(string);

    strinv(string);



    return 0;
}