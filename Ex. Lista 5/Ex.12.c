#include <stdio.h>
#include <string.h>

char Copia(char v1[], char copia[]){

int i;
int tamanho = strlen(v1); 
copia[tamanho];

for (i = 0; i < tamanho; i++) {

    copia[i]  = v1[i];


}

    return copia[tamanho];

}
int main(void) {

    char frase[90];
    char copiado[90];
    

    printf("Digite a frase que deseja: ");
    gets(frase);

    copiado[90] = Copia(frase, copiado);

    printf("Sua frase copiada sera: %s", copiado);


    




    return 0;
}