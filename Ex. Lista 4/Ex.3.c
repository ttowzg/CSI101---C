#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{

    int i;
    int somatorio = 0;

    for (i = 1; i <= n; i++)
    {
        somatorio += i;
    }
    return somatorio;
}

int main(void) {

    int resultado, x;

    printf("digite um numero para as somas: ");
    scanf("%d", &x);

    resultado = soma(x);

    printf("resultado sera %d", resultado);

    return 0;
}