#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    int idade;
    int peso;
    char nome;

    printf("Informe a primeira letra do seu nome, sua idade e seu peso:");
    printf("Primeira letra:"); 
    scanf ("%c",&nome);
    printf("Idade:"); 
    scanf ("%d",&idade);
    printf("Peso:"); 
    scanf ("%d",&peso);

    if (idade >= 18 && idade <= 67 && peso > 50) {

        printf("\nParabens, voce pode doar sangue.");

    } else { printf("infelizmente voce nao pode doar sangue ainda.");}



    return 0;
}