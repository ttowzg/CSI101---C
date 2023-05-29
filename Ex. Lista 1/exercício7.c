#include <stdio.h>

int main (void) {

int c;
int f;

printf("digite o valor em celsius:\n");
scanf("%d",&c);

f = (9*c + 160)/5;

printf("o valor %d convertido em fahrenheit: %d", c,f);


return 0;

}
