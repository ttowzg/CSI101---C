#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n;
    int pares = 0, impar = 0;
    int contador = 0;
    int somapares = 0,somaimpares = 0, somageral = 0;
    float media, mediageral;

    printf("Digite uma serie de numeros ate que o Zero seja mencionado:\n");

    do{

        scanf("%d",&n);

        somageral += n;
        contador++;

        if(n % 2 == 0) {
            
            pares++;
            somapares = somapares + n;
                }
         if(n % 2 != 0) {
            
            impar++;
            somaimpares = somaimpares + n;
        }
        somageral = somaimpares + somapares;
       
        

    } while (n != 0);
    
    printf("\nOs numeros de pares sao %d e %d impares.\n", pares, impar);
    
    mediageral = (float)somageral / contador;
    
    media = (float)somapares / contador;

    printf("A media dos numeros pares serao: %2.f\nA media geral sera: %2.f", media, mediageral);

    return 0;
}
