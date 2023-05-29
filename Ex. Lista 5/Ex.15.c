#include <stdio.h>
#include <string.h>

void strins(char str[], char c, int pos){

    int i,j = 0;
    int tamanho = strlen(str) + 1;
    char string_nova[tamanho];

    for(i=0 ; i < tamanho; j++, i++){

        string_nova[j] = str[i];

        if( i == pos ){

            string_nova[j - 1] = c;
           

        } 
        }

    
    printf("A nova palavra sera: ");
    puts(string_nova);





}




int main (void) {

    char string[90], caractere;
    int posicao;

    printf("Digite seu frase: ");
    gets(string);

    printf("Digite um caracter: ");
    scanf("%c", &caractere);

    printf("Insira uma posicao: ");
    scanf("%d", &posicao);

    strins(string, caractere, posicao);


    return 0;
}