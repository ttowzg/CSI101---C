#include <stdio.h>
#include <stdlib.h>

void criar_matriz(int tam, int **matriz ){

    int i,j;

    srand(time(NULL));

       for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){

            matriz[i][j] = rand() % 100;

            }
        }

        for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){

            printf("%d\t", matriz[i][j]);

            }
            printf("\n");
        }

}



void cal_matriz(int tam, int **matriz, int **matrizresp, int random_num){

    int i,j;
    
  for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){

            matrizresp[i][j] = matriz[i][j] * random_num;


        }
    }

}



void imprimir( int tam, int **matrizresp){

    int i, j;
   
  for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){

            printf("%d\t", matrizresp[i][j]);

            }
            printf("\n");
        }
    

}

int main (void){

    int tam;
    int i, j;
    int **matriz;
    int **matrizresp;
    int random_num;

    printf("Informe o tamanho da matriz quadrada:\n");
    scanf("%d", &tam);

    matriz = (int**)malloc(tam * sizeof(int*));
    matrizresp = (int**)malloc(tam * sizeof(int*));

    for(i = 0; i < tam; i++){
        matriz[i] = (int*)malloc (tam*sizeof(int));
        matrizresp[i] = (int*)malloc (tam*sizeof(int));
    }

    printf("Digite um numero aleatorio para a multiplicacao escalar:\n");
    scanf("%d", &random_num);

    criar_matriz(tam, matriz);
    printf("\n");
    cal_matriz(tam, matriz, matrizresp, random_num);
    imprimir(tam, matrizresp);

    for(i = 0; i < tam; i++){
        free(matriz[i]);
        free(matrizresp[i]);
    }

    free(matriz);
    free(matrizresp);

    return 0;
}