#include <stdio.h>
#include <math.h>

int main (void){

float sen2 = 0, seno, sen1 = 0, sumconta = 0, difconta = 0;
int x,i,f, c = 0, fatorial= 1;

printf("informe um valor x em radianos:\n");
scanf("%d",&x);

for (i = 3; i <= x; i+=2){

    sen2 = pow(x,i);
    c++;

     for (f = 1; f <= i; f++)
     { 
        fatorial *= f;
     }

     sen1 = sen2/fatorial;


    if (c % 2 == 0) {

        sumconta += sen1;
    } else {
        difconta += sen1;
    }
    fatorial = 1;

}

seno = x - difconta + sumconta;

printf("\n%3.f", seno);

    return 0;
}