#include <stdio.h>
#include <math.h>

int main (void) {

    int nota = 0, aluno, i;
    float media;
    int soma = 0, somasala = 0;
    float mediafinalgeral = 0;
    int contador = 0;
 
 for (i = 0; i <= 999; i++){
    
    printf("Digite suas quatro notas: ");

    for (aluno = 0; aluno <= 3; aluno++){
     scanf("%d", &nota);
        soma = soma + nota;
        media = (float)soma/4;
    }
   
    printf("sua media foi: %.2f\n", media);

        if (media >= 6) {
            printf("\nvoce foi aprovado!\n");
        
            }else{
                printf("\nvoce nao foi aprovado.");
            }
    somasala += media;
    contador++;

    media = 0;
    soma = 0;

     mediafinalgeral = somasala/contador;
    printf("\na media da turma foi %2.f! ", mediafinalgeral);

 }

    return 0;
}