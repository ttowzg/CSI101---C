#include <stdio.h>
#include <math.h>

int main (void)
{
    int valor;

    printf("Digite um numero de 1 a 10000 para verificar se ele pertence a qual conjunto:");
    scanf("%d", &valor);

    if (0 < valor && valor < 10){
        printf("esta entre 0 e 10");
    }else if ( 10 < valor && valor < 100){
        printf("esta entre 10 e 100");
        }else if (100 < valor && valor < 1000){
            printf("esta entre 100 e 1000");
            }else if (1000 < valor && valor < 10000){
                printf("esta entre 1000 e 10000");}




    return 0;
}