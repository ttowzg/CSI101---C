#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strichr(char str[], char c){

int i;

int mostrar = 0;
int tam = strlen(str);

for(i = 0; i < tam; i++){

    if(str[i] == c){

        mostrar = i;

        break;

    } else {
        mostrar = -1;
        }

    }



    return mostrar;

}

int main (void) {


    char str[999];
    char c = 't';

    printf("\nDigite sua frase motivacional: ");
    gets(str);

    printf("sua frase eh: ");
    puts(str);

    int ocorrencia;
    ocorrencia = strichr(str, c);

    if (ocorrencia >= 0){

    printf("\nO lugar da ocorrencia %c na string sera: %d", c, ocorrencia);
    
    } 
    else
    {

        printf("\nNao ha ocorrencia do caractere %c" , c);
    }






    return 0;
}