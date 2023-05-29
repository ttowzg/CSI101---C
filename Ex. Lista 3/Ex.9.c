#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main (void) {

    int salario, maior = INT_MIN;

    printf("Digite seu salario: \n");
    while (salario != -999){

        scanf("%d", &salario);

        if (salario > maior) {
            maior = salario;
        }

    }

    printf("\nO maior salario sera: %d.", maior);






    return 0;
}