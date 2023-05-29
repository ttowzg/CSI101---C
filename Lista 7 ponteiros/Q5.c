#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i;
    int array[5];
    int *x;

    printf("Digite 5 numeros para o vetor:\n");
    
    for(i = 0; i < 5; i++){
    
        
        scanf("%d", &array[i]);
        
    }

   printf("\nSeu novo vetor sera:\n");
   

    for(i = 0; i < 5; i++){

        x = array + i;

        printf("%d\n", *x * 2);

    }
   


    return 0;
}