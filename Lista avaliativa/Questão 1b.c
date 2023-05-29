#include <stdio.h>
#include <stdlib.h>

int main(void) {

int soma = 0;
float media; 
int idade;
int alunos = 0;

while (idade > 0 || alunos < 9999){ 
    printf("Digite sua idade, aluno: ");
    scanf("%d", &idade);
    if (idade < 0) 
    {
    break;
    }
    soma = soma + idade; 
    alunos++;            
}
    media = (float)soma/alunos; 
    printf("\nA media das idades eh %f", media); 
 return 0;
}
