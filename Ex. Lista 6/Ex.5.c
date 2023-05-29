#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void soma(int vetor[4][4]){


        int i, j;
        int diagonalprinc = 0;

         for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){

            if(i == j){
                diagonalprinc += vetor[i][j];
            }

        }}

    printf("diagonal principal sera: %d", diagonalprinc);


        int diagonalsec = 0;

         for(i = 0; i < 4; i++){

            
                diagonalsec += vetor[i][4 - i - 1];
            

        }
    
    printf("diagonal secundaria sera: %d", diagonalsec);


}



int main (void) {

    int i,j;

    int vetor[4][4];
    int num;


    printf("Digite os numeros para preencher os vetores:\n");

    for(i = 0; i < 4; i++){
        for ( j =0; j < 4; j++){

            scanf("%d", &vetor[i][j]);

        }
        }

         for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){

            printf("%d\t", vetor[i][j]);

        }
        printf("\n");
        }

       // printf("Digite 1 para somar e 2 para multiplicar");
        //scanf("%d", &num);

        soma(vetor);

return 0;
}