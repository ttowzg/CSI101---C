#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n;
    int fatorial = 0;
    int i;

    printf("Digite o numero que seja o fatorial:");
    scanf("%d", &n);

    for (fatorial = 1; n > 1; n-- ){

        fatorial = fatorial * n;
    }
        
    printf("%d", fatorial);

    return 0;
}
