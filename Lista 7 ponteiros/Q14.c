#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int tam;
    int i;

    printf("Digite um numero aleatorio MAIOR que 1: ");
    scanf("%d", &tam);

    while (tam < 1){

        printf("Digite outro numero para continuar: ");
        scanf("%d", &tam);

    }

    int *v;

    v = (int*)malloc(tam * sizeof(int));

    printf("\nAgora digite valores positivos maiores que zero:\n");

    

    for(i = 0; i <tam; i++){
        
        scanf("%d", &v[i]);
        
        while(v[i] < 1){

            printf("ERRO digite outro numero: ");
            scanf("%d", &v[i]);

        } 
        
        
    }

    printf("\nSeu vetor sera:\n");

    for(i = 0; i < tam; i++){

        printf("%d ", v[i]);

    }

    free(v);


    return 0;
}