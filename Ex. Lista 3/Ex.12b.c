#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, p;
for(i = 1; i <= 10; i++){

    for ( p = 10 - i; p >= 1; p--)

        printf(" ");
    
    for ( p = 1; p <= i; p++) 
        printf("*");
        printf("\n");
    
}

    return 0;

}
