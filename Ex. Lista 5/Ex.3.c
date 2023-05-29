#include <stdio.h>

void multiplicacoes (int v1[], int v2[]) {

    int i;
    v1[10];
    v2[10]; 
    int resultado[10];

   
    for(i = 0; i < 10; i++){
    resultado[i] = (v1[i] * v2[i]);

    }
    printf("Vetor resultante sera:\n");
    for(i = 0; i < 10; i++){
        printf(" %d ", resultado[i]);
    }
    
}

int main (void){

int i;

    int vetor1[10];
    int vetor2[10];


for(i=0; i<10; i++){

    printf("Digite o valor para vetor1[%d]:\n",i);
    scanf("%d", &vetor1[i]);
}
    for(i=0; i<10; i++){
    printf("Entre com valor para vetor2[%d]:\n",i);
    scanf("%d", &vetor2[i]);
}

multiplicacoes(vetor1, vetor2);

return 0;

}

