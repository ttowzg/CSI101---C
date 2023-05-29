#include <stdlib.h>
#include <stdio.h>

void calculo_vetor(int v1[], int v2[]){

    int i, v3[10];

    for(i = 0;  i < 10; i++){

        v3[i] = v1[i] * v2[i];


    }

    printf("\nSeu novo vetor de multiplicacoes tera:\n");

    for(i = 0; i < 10; i++){

        printf("%d-", v3[i]);


    }


   
}

int main (void){

    int vetor1[10];
    int vetor2[10];
    int resultado;
    int i;

    printf("Digite 10 valores no vetor 1 e 2 para a multiplicacao: ");

    for (i = 0; i < 10; i++){

        scanf("%d", &vetor1[i]);

    }
        for (i = 0; i < 10; i++){

        scanf("%d", &vetor2[i]);
        
        }

    printf("\nSeu vetor 1 contem: ");

    for(i = 0; i < 10; i++){
       
        printf("%d, ", vetor1[i]);
        }

        printf("\nSeu vetor 2 contem: ");

        for(i = 0; i < 10; i++){

        printf("%d, ", vetor2[i]);
         }

    calculo_vetor(vetor1, vetor2);   

    return 0;
}