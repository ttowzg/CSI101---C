#include <stdio.h>
#include <stdlib.h>

void alterar_vetor(int vetor[], int tamanho){

int i;

for(i = 0; i < tamanho; i++){

    if (i == 0){
        vetor[i] = 66;
    }

    if (i == 5){
        vetor[i] = 77;
    }

    if(i == 6){
        vetor[i] = 88;
    }

    if(i == 1){
        vetor[i] = 99;
    }

    else {

        vetor[i] = vetor[i];

    }

}

}


int main (void) {

    int tamanho;
    int i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite quais numeros deseja para seu vetor: ");

    for(i = 0; i < tamanho; i++){
    
    printf("\nNumero %d: ", i + 1);
    scanf("%d", &vetor[i]);

    }

    printf("\nSeu Vetor sera:\n");

    for(i = 0; i < tamanho; i++){

    printf("%d ", vetor[i]);        

    }

    alterar_vetor(vetor, tamanho);

    printf("\nSeu novo vetor contem:\n");

    for(i = 0; i < tamanho; i++){

        printf("%d ", vetor[i]);

    }

    return 0;

}