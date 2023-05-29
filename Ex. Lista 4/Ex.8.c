#include <stdio.h>
#include <stdlib.h>

void fibo(int n) {

    int a = 0; 
    int b = 1;
    int soma = 0;
    int i;

    if (n >= 1){ 
        printf("%d-", b);
    }
    
    for (i = 2; i < n; i++) {

        soma = a + b;
        a = b;
        b = soma;

        printf("%d-", soma);

    }

}

int main (void) {

    int x;

    printf("Digite o numero que deseja terminar: ");
    scanf("%d", &x);

    fibo(x);


    return 0;
}