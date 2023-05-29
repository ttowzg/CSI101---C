#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int idade, peso, i, soma = 0;
    char entrarsair;

    do{

    printf("Digite S para verificar e N para sair: ");
    scanf(" %c", &entrarsair);

    if (entrarsair == 's') {
        printf("\nDigite sua idade: ");
        scanf("%d",&idade);
        if(idade >= 30)
        {
        printf("\nDigite seu peso: ");
        scanf("%d", &peso);
        soma += peso;
        } else  {
                printf("\ninvalido\n");
                }

    } else if(entrarsair == 'n') {
        printf("a soma dos pesos sera: %d.\n", soma);
        soma = 0;
    }

    } while (peso > 0 || idade > 0);

    return 0;
}