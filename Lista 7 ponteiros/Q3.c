#include <stdio.h>
#include <stdlib.h>

int main (void){

    float array[10];
    int i;    
    

    printf("digite 10 numeros para o vetor:");

    for(i = 0; i < 10; i++){

        scanf("%f", &array[i]);
       

    }
    for(i = 0; i < 10; i++){

        printf("%p\n", &array[i]);

    }

    return 0;
}