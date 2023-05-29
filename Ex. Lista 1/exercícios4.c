#include <stdio.h>

int main (void){

int sal;
int salmin;

printf("digite seu salario:\n");
scanf("%d",&sal);

salmin = sal/622;
printf("seu salario %d eh composto por %d salarios minimos aproximadamente",sal,salmin);


return 0;


}
