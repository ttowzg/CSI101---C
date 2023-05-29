#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int x;
    int y;

    printf("Digite dois valores aleatorios(primeiro x depois y):\n");

    scanf("%d", &x);
    scanf("%d", &y);

    int *a = &x;
    int *b = &y;


    printf("O maior end sera: ");

    if(&y > &x){
        printf("%d de y", *a);
    } else {
        printf("%d de x", *b);
    }


    return 0;
}