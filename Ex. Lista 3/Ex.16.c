#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i, j, c;
    int soma;
int contador = 0, contador2 = 0, contador3 = 0;

for (i = 1; i <= 6; i++){

    for(j = 6; j >= 1; j--)
    
    for(c = 6; c >= 1; c--)
      
        printf("%d - %d - %d\n", i, j, c);
        contador++;
        contador2++;
        contador3++;
}
soma = contador*contador2*contador3;
printf("O numero de possibilidade sera %d", soma);
return 0;
}
    