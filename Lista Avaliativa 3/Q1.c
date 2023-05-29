#include <stdio.h>

int rec(int tamanho, int v[], int numero){
    
        if(numero == v[tamanho]){

            return tamanho;

        } else {

            return rec(tamanho - 1, v, numero);

        }   if(tamanho == 0 && v[tamanho] != numero) {

            return -1;
        }

    }


int main (void) {

    int tam;
    int num;
    int i;
   

    printf("Digite quantos numeros deseja no vetor:");
    scanf("%d", &tam);

    int vetor[tam];

    for(i = 0; i < tam; i++){

        scanf("%d", &vetor[i]);

    }

    printf("\nAgora digite um numero para retornar seu indice no vetor:");
    scanf("%d", &num );

    int resultado = rec(tam, vetor, num);

    printf("\nO resultado sera %d", resultado);



    return 0;
}