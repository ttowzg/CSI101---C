#include <stdio.h>
#include <stdlib.h>

struct Dados{

    char nome[99];
    int idade;
    char end[99];

};

 


int main (void) {

    struct Dados ind;

    fflush(stdin);

    printf("\nDigite seu nome: ");
    fgets(ind.nome, 99, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &ind.idade);

    fflush(stdin);
    printf("Digite seu Endereco: ");
    fgets(ind.end, 99, stdin);

    printf("Seus dados serao:\n");

    printf("%s\n", ind.nome);
    printf("%d\n", ind.idade);
    printf("%s", ind.end);

  

    return 0;
}