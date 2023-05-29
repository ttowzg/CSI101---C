#include <stdio.h>

void numeros(int vet[]) {

    int i;
    int pares = 0;
    int impares = 0;

    for(i = 0; i < 20; i++){

        if (vet[i] % 2 == 0) {

            pares++;

        } else if (vet[i] % 2 != 0) {

            impares++;

        }

    }

    printf("numeros de pares serao: %d\nnumero de impares serao: %d.", pares, impares);
    
}

int main (void) {

    int i, vetor[20];
    printf("Digite 20 numeros:\n");
    
    for(i = 0; i < 20; i++){

    scanf("%d", &vetor[i]);

    }

    numeros(vetor);
    
    return 0;
}
