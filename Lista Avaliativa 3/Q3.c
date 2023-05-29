#include <stdio.h>

void eh_multiplo(int num1, int num2, int *resp){


         if(num1 % num2 == 0){
            *resp = 1;
        } else {
            *resp = 0;
    }
        

    }

int main (void) {

    int i;
    int x;
    int tam;
    

    printf("Digite um numero: ");
    scanf("%d", &x);
   
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tam);


    int *vet = malloc(tam * sizeof(int));
    int vet2[tam];

    printf("\nAgora digite os valores do vetor de tamanho escolhido por ti:\n");

    for(i = 0; i < tam; i++){

    scanf("%d", &vet[i]);   

    }

    int aux_vet;

    for(i = 0; i < tam; i++){

       
        eh_multiplo(vet[i], x, &vet2[i]);

    }

    for(i = 0; i < tam; i++){
        if(vet2[i] == 1) {
            printf("%d eh multiplo de %d\n", vet[i], x);
        }else{
            printf("%d nao eh multiplo de %d\n", vet[i], x);
        }
        }

        free(vet2);
    

    return 0;
}