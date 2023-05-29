#include <stdio.h>


float Media(int v[]){

int soma = 0;
int i;
float media;

for(i = 0; i < 20; i++){

soma += v[i];

}

media = (float)soma / 20;

return media;
}

void abaixo_media(float media_vetor, int vetor[]) 
{

    int i;

    printf("\nNumeros abaixo da media serao:\n");

    for(i = 0; i < 20; i++){

        if(vetor[i] < media_vetor) {
            printf("%d ", vetor[i]);
        }

    }


}
    



int main (void) {

    int i;
    int vet[20];
    float resultado;

    printf("Digite 20 numeros para o vetor:\n");

    for(i = 0; i < 20; i++){
        
        scanf("%d", &vet[i]);

        while (vet[i] < 0) {

            printf("Digite um numero positivo para continuar: ");
            scanf("%d", &vet[i]);
           
            }  

    }



    resultado = Media(vet);

    printf("A media sera: %3.f.", resultado);

    abaixo_media(resultado, vet);


    return 0;
}
