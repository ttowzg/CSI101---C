#include <stdio.h>

int main (void){

int valor;
int valoff;

printf("digite seu valor para processarmos o desconto:\n");
scanf("%d",&valor);

valoff = valor*0.91;

printf("o valor %d com desconto eh %d\n",valor,valoff);

return 0;

}
