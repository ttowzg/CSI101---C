#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main (void){

    int filhos = 0, salario = 0, somafil = 0, somasal = 0, contador = 0, maior = INT_MIN, percent, verif, tristeza = 0;
    float mediafilhos, media, mediasalario;

    do{ 
        printf("Digite 1 para continuar, digite qualquer outro numero para parar: ");
        scanf("%d", &verif);

    if (verif == 1) {

        printf("\nDigite o seu salario e numero de filhos: ");
        scanf("%d %d", &salario, &filhos);
        contador++;
        somafil = somafil + filhos;
        somasal = somasal + salario;

        if (salario > maior) {
            maior = salario;
        }

        if (salario <= 100) {
            tristeza++;
        }
    }

    } while (verif == 1);

    media = (float)somasal/contador;
    mediafilhos = (float)somafil/contador;
    percent = (tristeza*100)/contador;

    printf("\nA media de salario sera: %2.f\nA media de filhos sera: %2.f\nO maior salario sera: %d\nO percentual de pessoas com ate 100 reais sera: %d",media, mediafilhos, maior, percent);


    return 0;
}