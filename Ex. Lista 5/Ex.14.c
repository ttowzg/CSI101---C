#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contador(char frase[]){
int i;

int contador = 0;

for(i = 0; frase[i] != '\0';i++){
    if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ){
        contador++;
    }
}

printf("\nSua frase tera %d vogais", contador);

}


int main (void) {

    char frase[99];

    printf("Digite uma frase para contar as vogais: ");
    gets(frase);

    contador(frase);
    





}