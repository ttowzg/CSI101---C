#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i = 0;
    int n = 0;
    int soma = 0;

    scanf("%d",&n);

    while (i < n){

       
        printf("%d\n",i);

        i++;

        soma = soma + i;

    }
        printf("\n\na soma sera: %d", soma);
    

    return 0;
}