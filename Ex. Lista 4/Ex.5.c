#include <stdio.h>

void estacao(int dia, int mes)
{

    if (mes == 9 && dia > 23 || mes == 10 && dia < 30 || mes == 11 && dia < 30 || mes == 12 && dia < 21)
    {
        printf("\n%d/%d - primavera\n", dia, mes);
    }
    else if (mes == 12 && dia > 21 || mes == 1 && dia < 30 || mes == 2 && dia < 30 || mes == 3 && dia < 21)
    {
        printf("\n%d/%d - verao\n", dia, mes);
    }
    else if (mes == 3 && dia > 21 || mes == 4 && dia < 30 || mes == 5 && dia < 30 || mes == 6 && dia < 21)
    {
        printf("\n%d/%d - outono\n", dia, mes);
    }
    else if (mes == 6 && dia > 21 || mes == 7 && dia < 30 || mes == 8 && dia < 30 || mes == 9 && dia < 23)
    {
        printf("\n%d/%d - inverno\n", dia, mes);
    }
    else
    {
        printf("\ninvalido\n");
    }
}

int main(void)
{

    int d, m;

    do
    {
        printf("Digite o dia e o mes:\n");
        scanf("%d %d", &d, &m);

        estacao(d, m);

    } while (d != 0 || m != 0);

    return 0;
}