#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, i, soma;
    int a = 0;
    int b = 1;

    printf("Digite um numero para determinar a sequencia: ");
    scanf("%d", &n);
    if ( n >= 1) {printf("%d-", b);}
    
    for (i = 2; i <= n; i++){

       
        soma = a + b;
        a = b;
        b = soma;
        printf("%d-", soma);

    }
        

    return 0;
}
