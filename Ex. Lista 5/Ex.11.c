#include <stdio.h>
#include <string.h>

void palindromo(char palavra[]){

    int i; int j = 0;
    int diff = 0;
    int tamanho = strlen(palavra);
    tamanho--;
    char copia[tamanho];

    for(i = 0; i < strlen(palavra); i++){
        if (palavra[j] != ' '){
            copia[j++] = palavra[i];
           
        } else {
            j--;
        }
    }

  copia[j] = '\0';

    tamanho = strlen(copia) - 1;

    for (i = 0; i < tamanho; i++){
    
       
        if(palavra[i] != palavra[tamanho - 1]){
            diff++;
        }
            
            
    }   

    int resultado = diff;

    if (resultado == 0) {
        printf("\nEh Palindromo");
    } else {
        printf("\nNao eh palindromo");
    }
    


}


int main (void){

    char string[50];

    printf("Digite uma frase para a string:");
    gets(string);

    printf("\nSua frase eh: ");
    puts(string);

    palindromo(string);
    

    return 0;
}