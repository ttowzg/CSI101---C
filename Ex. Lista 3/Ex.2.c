#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (void) {

    int maior = INT_MIN;
    int num, num_maior;
    int i;

    for (i = 0; i < 10; i++) {

        scanf("%d", &num);
            if (num > maior) {
             
             maior = num;
    }

    }

    printf("o maior sera: %d", maior);



    return 0;
}