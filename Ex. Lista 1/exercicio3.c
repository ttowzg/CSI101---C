#include <stdio.h>

int main (void){

int conta;
int gorj;

printf("qual valor a pagar\n");
scanf("%d",&conta);

gorj = conta*0.10;

printf ("o valor da conta de %d tera uma gorjeta de: %d", conta, gorj);


return 0;
}
