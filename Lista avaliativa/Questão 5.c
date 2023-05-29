#include <stdio.h>
#include <math.h>

int main (void){

float serie = 0, termo, fatorial;
int x,i,f;

printf("informe um valor x:\n");
scanf("%d",&x);

for (i = 0; i <= x; i++){

    termo = pow(x,i);
    fatorial = 1;
     for (f = 1; f <= 1; f++)
     { 
        fatorial *= f;
     }

    termo = termo/ fatorial;
    serie += termo;



}

printf("\n%f", serie);

    return 0;
}