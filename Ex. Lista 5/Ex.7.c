#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler_notas(float notas1[], float notas2[]){

int i;

for(i = 0; i < 10; i++){

        scanf("%f", &notas1[i]);
        scanf("%f", &notas2[i]);
        }

}

void media(float M[], float n1[], float n2[]) {

int i;
int soma;

for(i = 0; i < 10; i++){

    soma = n1[i] + n2[i];

    M[i] = (float)soma / 2;

}
}

void exibir(float notas1[], float notas2[], float medias[]){

    int i;

    for(i = 0; i < 10; i++){

    printf("\nAluno %d:", i + 1);
    printf("\nA nota 1 sera: %.3f\nA nota 2 sera: %.3f", notas1[i], notas2[i]);
    printf("\nA media sera: %.3f\n\n", medias[i]);

    }
}

int main(void) {


    int n = 10;
    float notas1[n], notas2[n], medias[n];
    int i;

    printf("Digite duas notas para calcular a media:\n");


    ler_notas(notas1,notas2);
    media(medias, notas1,notas2);
    exibir(notas1,notas2,medias);



return 0;
}