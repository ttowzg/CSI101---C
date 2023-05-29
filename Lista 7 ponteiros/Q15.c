#include <stdio.h>
#include <stdlib.h>

float* aloca_vetor_float(int Tamanho){

    float *vetor;

    vetor = (float*) calloc(Tamanho, sizeof(float));

    return vetor;


}

int exibe_vetor(int tamanho, float *v){

    int i;

    for(i = 0; i < tamanho; i++){

        printf("%.2f\n",v[i]);

    }


}


int main (void){

    int i;
    int tam;

    printf("Digite o tamanho do vetor que deseja: ");
    scanf("%d", &tam);

    float *vet = aloca_vetor_float(tam);

    printf("Agora, digite os valores para o vetor:\n");

    for(i = 0; i < tam; i++){

        scanf("%f", &vet[i]);

    }

    exibe_vetor(tam,vet);


    free(vet);


    return 0;
}