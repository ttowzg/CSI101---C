#include <stdio.h>
#include <math.h>

int main (void){

float cos2 = 0, cosseno, cos1 = 0, sumconta = 0, difconta = 0;
int x,i,f, c = 0, fatorial= 1;

printf("informe um valor x em radianos:\n");
scanf("%d",&x);

for (i = 2; i <= x; i+=2){

    cos2 = pow(x,i);
    c++;

     for (f = 1; f <= i; f++)
     { 
        fatorial *= f;
     }

     cos1 = cos2/fatorial;


    if (c % 2 == 0) {

        sumconta += cos1;
    } else {
        difconta += cos1;
    }
    fatorial = 1;

}

cosseno = 1 - difconta + sumconta;

printf("\n%3.f", cosseno);

    return 0;
}