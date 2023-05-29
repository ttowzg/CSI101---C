#include <stdio.h>

int main (void) {

    int a;
    int b;
    int soma;
    float media;
    int prod;
    int dif;

    do{

        printf("\ndigite dois numeros entre 1 e 10:\n");
        scanf("%d",&a);
        scanf("%d",&b); 

            soma = a + b;

        if (soma < 8 ) {
            
            media = (soma)/2;
            printf("a media dara: %f", media);

        } else if ( soma == 8 ) {

            prod = a*b;
            printf("o produto dara: %d", prod);

        } else if (soma > a - b) {
          
            dif = a - b;
            printf("a diferenca dara: %d", dif);
            } else {printf("digite o primeiro numero > que o segundo.");}
        
        
    } while ( a != 0 && b != 0);









return 0;
}