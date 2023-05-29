#include <stdlib.h>
#include <stdio.h>

int notas(int x){

    

    if (x >= 90 && x <= 100) {

        printf("Conceito A\n");

    } else if (x <= 89 && x >= 70) {

        printf("Conceito B\n");

    } else if (x >= 50 && x <= 69) {

        printf("Conceito C\n");

    } else if (x >= 0 && x <= 49) {

        printf("Conceito D\n");

    }


    return notas;
}


int main(void){

    int verif;
    int Notas;
    int media;

    do {

        printf("Digite 1 para continuar ou qualquer outro numero para parar: ");
        scanf("%d", &verif);

        if (verif == 1) {

            printf("Digite sua media final:\n");
            scanf("%d", &media);

            Notas = notas(media);

        } 

    }while (verif == 1);

    return 0;
}