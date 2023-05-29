#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int elimina_espacos(char vetor1[] , char vetor2[]){

int i, j, tamanho = strlen(vetor1);

for (i = 0, j = 0; i < tamanho; j++, i++){

    if(vetor1[i] != ' '){
        vetor2[j] = vetor1[i];   
    } else {j--; }
}



    return vetor2[tamanho];


}

int main (void) {

    char string[90];
    char string_sem_espaco[90];

    printf("Escreva uma frase para a string:");
    gets(string);

    string_sem_espaco[90] = elimina_espacos(string, string_sem_espaco);

    printf("Sua palavra agora sera: %s ", string_sem_espaco); 



    return 0;
}