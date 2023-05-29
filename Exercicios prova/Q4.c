#include <stdio.h>
#include <math.h>

int main(void) { // nao sei o porque, mas ta demorando para copilar esse codigo assim como 3 questões da lista avaliativa. 

    int x = 0, i;
    float f = 0,serie;
    printf("digite o valor do X :\n\n");
    scanf("%d",&x);

    for (i = 1; i <= x; i++){

        f += ((pow(x,i)+i)/(float)(x+i+2));
    }
    serie = 2 * f;
    printf("o resultado da serie e: %f.\n", serie);

    return 0;
}