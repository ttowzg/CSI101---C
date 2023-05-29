#include <stdio.h>

int main (void) {

    int i;
    int vetor[20];

    printf("Digite 20 numeros para o vetor trocar suas posicoes:\n");

    for( i = 0; i < 20; i++) {

        scanf("%d", &vetor[i]);

    }
    printf("\nO vetor contem:");
    for ( i = 0; i < 20; i++){

        printf("%d\n", vetor[i]);

       
    }


    inverter(vetor);
    

    return 0;
}

void inverter(int v1[]){

    int i, j;

    for (i = 0; i < 20; i++) {
        v1[i] = v1[20 - i];
    }

    printf("\nNovo vetor\n");

    for (j = 0; j < 20; j++) {
        printf("%d\n", v1[j]);
    }

}