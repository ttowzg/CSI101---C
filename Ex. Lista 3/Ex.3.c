#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (void) {

    int num, maior = INT_MIN, menor = INT_MAX;
    int i;

    printf("Digite seis numeros:\n");

    for(i = 0;i < 6; i++) {

        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }

        if (num < menor){

            menor = num;
        }

    }

    printf("\nO maior numero sera %d e o menor sera %d.", maior, menor);


    return 0;
}
