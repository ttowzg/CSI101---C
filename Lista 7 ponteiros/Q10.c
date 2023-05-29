#include <stdio.h>

int main (void){

    int vetor [] = {4,9,13};
    int i;
    int *o = vetor;

    for( i = 0; i < 3; i++){

        printf("%d ", *o++);
    }

}