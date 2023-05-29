#include <stdio.h>
#include <stdlib.h>

void le_array(int tam, int *vetor){


    int i;
    printf("Digite os valores do seu vetor:\n");

        for(i = 0; i < tam; i++){

            printf("Valor - %d: ", i + 1);
            scanf("%d", &vetor[i]);
        }


}

void exibe_array(int tam, int *vetor){

    int i;

    printf("\nSeu vetor sera:\n");
    printf("[");
    for(i = 0; i <tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("]");

}

long int multiplica_array(int tamanho, int *vet){

    int i;
    int mult = 1;
    int resul;

    for(i = 0; i <tamanho; i++){

        mult *= vet[i];

    }

    return mult;


}

int main (void){

    int i;
    int tam;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vetor = (int*)malloc(tam * sizeof(int));

  
    le_array(tam, vetor);
    exibe_array(tam, vetor);

    long int resultado = multiplica_array(tam,vetor);

    printf("\nO resultado sera: %d", resultado);

    free(vetor);

    return 0;
}