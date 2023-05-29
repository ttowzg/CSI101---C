#include <stdio.h>

int main(void) {
    
    int i = 0;
    int n;
    float idademedia;
    float idade = 0;
    float soma = 0;

    for (i = 1; i <= 30; i++){

        printf("Digite sua idade, aluno:");
        scanf("%f",&idade);
        soma += idade;

    }
    idademedia = (float)soma/30;
    printf("a media da idade dos alunos eh %2.f",idademedia);
    return 0;
}