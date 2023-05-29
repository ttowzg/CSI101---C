#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i = 0, n = 0, tabuada;

    printf("Digite um numero para calcular a tabuada:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
    
    tabuada = i * n;

    printf("\n%d x %d = %d",i,n,tabuada);

    }

  
    
    
    return 0;
}
