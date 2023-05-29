#include <stdio.h>
#include <string.h>

void palindromo(char str[]){

    int i = 0;
    int diff = 0;
    int tamanho = strlen(str);
    tamanho--;



    while (tamanho >= i){
       
        if(str[i] != str[tamanho]){
            diff++;
        }
            i++;
            tamanho--;
    }   

    int resultado = diff;

    if (resultado == 0) {
        printf("\nEh Palindromo");
    } else {
        printf("\nNao eh palindromo");
    }
    


}


int main (void){


    char string[90];

    printf("Digite uma frase para a string:");
    gets(string);

    printf("\nSua frase eh: ");
    puts(string);

    palindromo(string);
    

    return 0;
}