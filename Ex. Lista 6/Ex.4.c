#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void Maior( int matriz[4][4]){

int i,j;
int maior = matriz[0][0];
int maior_posi;
int maior_posi2;
    
        for( i = 0; i < 4 ; i++){

            for(j = 0; j < 4; j++){

                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    maior_posi = i;
                    maior_posi2 = j;
                }
            

            }
        
        }

    printf("\nO maior elemento sera %d e estara na posicao [%d][%d].",maior, maior_posi + 1, maior_posi2 + 1);


}

void Menor(int matriz[4][4]){

int i,j;
int menor = matriz[0][0];
int menor_posi, menor_posi2;

for( i = 0; i < 4 ; i++){

            for(j = 0; j < 5; j++){

                if(matriz[i][j] < menor){
                    menor = matriz[i][j];
                    menor_posi = i;
                    menor_posi2 = j;
                }
            

            }
        
        }

    printf("\nO menor elemento sera %d e estara na posicao [%d][%d].",menor, menor_posi + 1, menor_posi2 + 1);



}

int main(void) {

    int matriz[4][4];
    int i,j;

    srand(time(NULL));

    for( i = 0; i < 4 ; i++){
        for(j = 0; j < 4; j++){

            matriz[i][j] = rand() % 100;


        }
    }

    printf("matriz aleatoria contem:\n");

    for( i = 0; i < 4 ; i++){

        for(j = 0; j < 4; j++){

            printf("%d\t", matriz[i][j]);

                
                }
                printf("\n");
            }

        Maior(matriz);
        Menor(matriz);
         
    return 0;
}