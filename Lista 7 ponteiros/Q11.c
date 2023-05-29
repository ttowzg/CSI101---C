#include <stdio.h>
#include <stdlib.h>

soma_vet(int tamanho, int *vet1, int *vet2){

    int i;
    int *vet3;

    vet3 = (int*)malloc(tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++){

        vet3[i] = vet1[i] + vet2[i];

       
    }

        return vet3;

    

    free(vet3);

}



int main (void){

    int i;
    int tam;
    int *vetor1;
    int *vetor2;

    printf("Digite o numero de elementos para os dois vetores: ");
    scanf("%d", &tam);

    vetor1 = (int*)malloc(tam * sizeof(int));
    vetor2 = (int*)malloc(tam * sizeof(int));

    printf("\nAgora preencha os vetores como desejar:\n");

    
    printf("\nPrimeiro vetor:\n");

    for(i = 0; i < tam; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("\nPrimeiro vetor ficou:\n");

    for(i = 0; i < tam; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\nSegundo vetor:\n");
    
    for(i = 0; i < tam; i++){
        scanf("%d", &vetor2[i]);
    }

    printf("\nSegundo vetor ficou:\n");

    for(i = 0; i < tam; i++){
        printf("%d ", vetor2[i]);
    }

    int *vetor3 = soma_vet(tam, vetor1, vetor2);

    printf("\nO resultado do terceiro vetor ficou:\n" );

    for( i = 0; i < tam; i++){

        printf("%d\n", vetor3[i]);

    }



    free(vetor1);
    free(vetor2);


    return 0;
}