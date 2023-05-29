#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int sortear(int num[]){

num[10];

int i;

srand((unsigned) time(NULL));

for(i = 0; i < 10; i++){

    num[i] = rand() % 20 + 10;

}

    return num[10];
}
int main (void) {

    int numeros[10];
    int i;

    sortear(numeros);

    printf("\nSeu novo vetor contem:\n");

    for(i = 0; i < 10; i++){
   
    printf("Vetor [%d] - %d\n", i + 1, numeros[i]);

    }



    return 0;
}