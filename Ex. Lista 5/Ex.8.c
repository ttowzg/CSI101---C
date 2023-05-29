#include <stdio.h>
#include <stdlib.h>

void reajustar_sal(int sal[], int aumento[], int matricula[], int par, int impar)
{

    int i;

    for (i = 0; i < 5; i++)
    {

        if (matricula[i] % 2 == 0)
        {

            aumento[i] = sal[i] * 1.15;
        }

        if (matricula[i] % 2 != 0)
        {

            aumento[i] = sal[i] * 1.2;
        }
    }
}

void exibir(int sal[], int aumento[], int matricula[], int par, int impar)
{

    int i;

    for (i = 0; i < 5; i++)
    {

        if (matricula[i] % 2 == 0)
        {
            printf("\nO funcionario %d\n\nMatricula %d\nSalario base: %d\nAumento de 15\nNovo salario de: %d\n", i + 1, matricula[i], sal[i], aumento[i]);
        }
        else if (matricula[i] % 2 != 0)
        {
            printf("\nO funcionario %d\n\nMatricula %d\nSalario base: %d\nAumento de 20\nNovo salario de: %d\n", i + 1, matricula[i], sal[i], aumento[i]);
        }
    }
}

int main(void)
{

    int i;
    int aumento[5], par, impar, matricula[5];
    int sal[5];

    printf("Digite o numero de sua matricula e seu salario logo em seguida: \n");

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &matricula[i]);
        scanf("%d", &sal[i]);
    }

    reajustar_sal(sal, aumento, matricula, par, impar);
    exibir(sal, aumento, matricula, par, impar);

    return 0;
}