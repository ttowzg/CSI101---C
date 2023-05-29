#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int dentro = 0, fora = 0, num;
    int i;

    printf("Digite 10 numeros para verificar se esta entre 10 e 20:\n");

    for(i = 0; i < 10; i++){

        scanf("%d", &num);

        if (num >= 10 && num <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("A quantidade de numeros dentro e: %d\nAquantidade fora sera: %d", dentro, fora);

    return 0;
}