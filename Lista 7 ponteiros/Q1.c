#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int x = 2;
    int y = 3;

    printf("O maior end sera: ");

    if(&x > &y){
        printf("%p de x", &x);
    } else {
        printf("%p de y", &y);
    }


    return 0;
}