#include <stdlib.h>
#include <stdio.h>


int contaimpar(int n1, int n2){

    int i;
    int impar = 0;

    if (n1 < n2){

        for(i = n1; i <= n2; i++){

            if(i % 2 != 0 ) {
                impar++;
            }

        }


    } else if (n1 > n2){

          for(i = n2; i <= n1; i++){

            if(i % 2 != 0 ) {
                impar++;
            }

        }

    }
    

    return impar;

}

int main(void){

    int numero1, numero2, resultado;

    printf("Digite um intervalo de dois numeros inteiros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    resultado = contaimpar(numero1, numero2);

    printf("\nO numero de impares nesse intervalo (%d,%d) sera: %d.",numero1, numero2, resultado);


    return 0;
}