#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void soma(int vetor[5][5]){

int i,j;

int maior_soma = INT_MIN;
int menor_soma = INT_MAX;

int soma_i;
int soma_j;

int somalinhas[5];
int somacolunas[5];

int menor_linha;
int maior_coluna;


    for(i = 0; i < 5; i++){

        soma_i = 0;

        for(j = 0; j < 5; j++){

            soma_i += vetor[i][j];


        }

            somalinhas[i] = soma_i;


    }
    
    for(j = 0; j < 5; j++){

        soma_j = 0;
    
        for(i = 0;  i < 5; i++){

            soma_j += vetor[i][j];


        }

            somacolunas[j] = soma_j;
            


    }

    printf("\n\nVetor com a menor e a maior soma das linhas:\n\n");


    for(i = 0; i < 5; i++){

        printf("Linha %d: %d\n", i + 1, somalinhas[i]);
            
            if (somalinhas[i] < menor_soma) {
            menor_soma = somalinhas[i];
            menor_linha = i;
            

            }

        
    } 
    
    printf("\nA menor soma de linha estara na: Linha %d - e sera %d\n",menor_linha + 1, menor_soma);
  
    printf("\n\nVetor com a soma das colunas:\n");

    for(j = 0; j < 5; j++){
        printf("Coluna %d: %d\n", j + 1, somacolunas[j]);

        if(somacolunas[j] > maior_soma){
            maior_soma = somacolunas[j];
            maior_coluna = j;
           
        }

    }   
    
    printf("\nA maior soma de coluna estara na: Coluna %d - e sera %d\n", maior_coluna + 1, maior_soma);
    
}


int main (void) {

    int i,j;

    int vetor[5][5];


    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

         vetor[i][j] = rand() % 10;

       
    }
    }

        printf("Sua matriz aleatoria contem: \n");

     for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            printf("%d\t", vetor[i][j]);

        }
        printf("\n");
        }

        soma(vetor);



    return 0;
}