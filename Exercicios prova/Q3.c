#include <stdio.h>
#include <limits.h>

int main (void) {

float salario = 0, salariototal = 0, mediasal, mediafil, percentual;
int  filhos, filhostotal = 0, habitantes = 0, salarioabaixo = 0, salariomaior = INT_MIN;

while (salario >= 0){
    printf("Digite o seu salario e numero de filhos:\n");
    scanf("%f", &salario);

    if (salario >= 0) {
        scanf("%d", &filhos);
        salariototal += salario;
        filhostotal += filhos;
        habitantes ++;
        if(salario > salariomaior){
            salariomaior = salario;
        }
        if(salario <= 1500) {
            salarioabaixo++;
        }
    }
}

mediasal = salariototal/habitantes;
mediafil = (float)filhostotal/habitantes;
percentual = (salarioabaixo*100)/habitantes;


printf("A media dos salarios sao: %.2f.\nA media do numero de filhos e: %f.\nO maior salario e: %d.\nO percentual de pessoas com salario ate 1500 e: %2.f.\n", mediasal, mediafil, salariomaior, percentual);


    return 0;
}