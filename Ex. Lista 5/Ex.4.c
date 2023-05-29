#include <stdio.h>
#include <limits.h>

int main (void) {

    int i;
    int vetor[20];

    printf("Digite 20 numeros para achar o maior e o menor:\n");

    for (i = 0; i < 20; i++) {
        
        printf("\nDigite o %do: ", i);
        scanf("%d" ,&vetor[i]);
       
    }
    
    maior_menor(vetor);

    return 0;
}

void maior_menor(int v[]){

    int maior = INT_MIN;
    int menor = INT_MAX;
    int maiorindice;
    int menorindice;

    int i;

    for(i = 0; i < 20; i++) {

    if (v[i] > maior) {

            maior = v[i];
            maiorindice = i;

        } if (v[i] < menor) {

            menor = v[i];
            menorindice = i;
        }
    }
    
        printf(" \n o maior sera o vetor [%d]: %d ", maiorindice , maior);
        printf(" \n o menor sera o vetor [%d]: %d ", menorindice, menor);
        


}