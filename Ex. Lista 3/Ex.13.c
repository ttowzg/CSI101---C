#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, p;
    int base;

    printf("digite o tamanho da base desejada: ");
    scanf("%d", &base);

for(i = 1; i <= base; i = i + 1){

    for ( p = base - i; p >= 1; p--)

        printf(" ");
    
    for ( p = base - i; p <= i; p++) 
        printf("*");
        printf("\n");
    
}

    return 0;

}
