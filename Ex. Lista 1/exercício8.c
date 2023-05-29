#include <stdio.h>

int main (void) {

int c;
int f;

printf("digite o valor em fahrenheit:\n");
scanf("%d",&f);

c = (f-32)/1.8;

printf("o valor %d convertido para fahrenheit eh: %d\n", f, c);
return 0;

}
