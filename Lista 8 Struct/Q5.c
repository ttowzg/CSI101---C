#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Dados{

    char nome[99];
    char esporte[99];
    int idade;
    int altura;

} dados;

void ExibirMaior(dados *atletas, int qntd, int *maior){

    int i;

    *maior = atletas[0].altura;

    for(i = 0; i < qntd; i++){

    if(atletas[i].altura > *maior){
        *maior = atletas[i].nome;

    } 

    }

}
void Older(dados *atletas, int qntd, int *old){

    int i;

    *old = atletas[0].idade;

    for(i = 0; i < qntd; i++){

    if(atletas[i].idade > *old){
        *old = atletas[i].nome;

    } 

    }
}

void Exibir(dados *atletas, int qntd){

    int i;

    printf("\nOS DADOS SERAO:\n");

    for(i = 0; i < qntd; i++){

        printf("NOME: ");
        puts(atletas[i].nome);
        printf("\nESPORTE: ");
        puts(atletas[i].esporte);
        printf("\nIDADE: %d\n", atletas[i].idade);
        printf("\nALTURA: %d\n", atletas[i].altura);

    }

};

int main(void) {

    int i;
    int qntd;
    int *maior;
    int *old;

    printf("Digite a quantidade de atletas: ");
    scanf("%d", &qntd);

    dados *atletas;

    atletas = (dados*)malloc(qntd * sizeof(dados));

    for(i = 0; i <qntd; i++){
        fflush(stdin);
        printf("Digite os dados do atleta - %d", i + 1);
        printf("\nNome: ");
        gets(atletas[i].nome);
        fflush(stdin);
        printf("Esporte: ");
        gets(atletas[i].esporte);
        fflush(stdin);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        fflush(stdin);
        printf("Altura: ");
        scanf("%d", &atletas[i].altura);
        
    }

    Exibir(atletas, qntd);
    ExibirMaior(atletas, qntd, &maior);
    printf("\nO maior Atleta sera: %s", maior);
    Older(atletas, qntd, &old);
    printf("\nO mais velho sera: %s", old);

    free(atletas);
    
    return 0;
}

