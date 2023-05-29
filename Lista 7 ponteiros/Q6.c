#include <stdio.h>
#include <stdlib.h>

int vetor(int vet[5]) {

    printf("%d\n", vet[0]);
    printf("%d\n", vet[1]);
    printf("%d\n", vet[2]);
    printf("%d\n", vet[3]);
    printf("%d\n", vet[4]);
    
    

}


int main (void) {

    int Vetor[5] = {1,2,3,4,5};

    printf("\nO resultado sera:\n");

    int resultado = vetor(Vetor);


    return 0;
}