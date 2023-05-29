#include <stdio.h>

long long int soma(int numero){

    if (numero == 1) {
        return 1;
    } else {
        return numero + soma(numero - 1);
    }

}

int main (void) {

    int num;

    printf("Digite um numero para a soma de todos ate ele: ");
    scanf("%d", &num);

    int resultado = soma(num);

    printf("\nO resultado da soma sera: %d", resultado);


    return 0;
}