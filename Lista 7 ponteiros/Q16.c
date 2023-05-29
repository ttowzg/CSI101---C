#include <stdio.h>
#include <stdlib.h>

int* multiplica_vetores(int *a, int *b, int tamanho){

    int i;
    int *vetor3;

    vetor3 = (int*)malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++){

        vetor3[i] = a[i] * b[i];

    }

    return vetor3;

    free(vetor3);

}



int main (void){

    int i;
    int tam;

    printf("Digite um tamanho para os dois vetores:");
    scanf("%d", &tam);

    int *vet1;
    int *vet2;

    vet1 = (int*)malloc(tam * sizeof(int));
    vet2 = (int*)malloc(tam * sizeof(int));

    printf("\nAgora preencha o vetor 1:\n");

    for (i = 0; i < tam; i++){

        scanf("%d", &vet1[i]);
    }
    printf("\n");
    for (i = 0; i < tam; i++){

        printf("%d\n",vet1[i]);
    }

    printf("\nAgora preencha o vetor 2:\n");

    for (i = 0; i < tam; i++){

        scanf("%d", &vet2[i]);
    }

    printf("\n");
    for (i = 0; i < tam; i++){

        printf("%d\n",vet2[i]);
    }

    printf("\n");
    printf("\nO resultado sera:\n");

    int *resultado = multiplica_vetores(vet1, vet2, tam);

    for(i = 0; i <tam; i++){

        printf("%d\n", resultado[i]);

    }


    free(vet1);
    free(vet2);


    return 0;
}