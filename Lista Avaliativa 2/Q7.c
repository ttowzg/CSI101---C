#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void multiplicar(int v[3][6]){

    int i, j;
    int num;


    printf("Digite um numero para multiplicar os valores da matriz: ");
    scanf("%d", &num);


    printf("\nSua nova matriz contem: \n");

    

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){

            printf("%d\t", v[i][j] * num);

        }
        printf("\n");
        }


}

int main (void) {

    int i,j;

    int vetor[3][6];


    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){

         vetor[i][j] = rand() % 100;

       
    }
    }

        printf("Sua matriz aleatoria contem: \n");

     for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){

            printf("%d\t", vetor[i][j]);

        }
        printf("\n");
        }


    multiplicar(vetor);
   
    


    



    return 0;
}