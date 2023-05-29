#include <stdlib.h>
#include <stdio.h>

int contaimpar(int n1, int n2)
{

    int i, n = 0;

    if (n1 < n2)
    {

        for (i = n1; i <= n2; i++)
        {

            if (i % 2 != 0)
            {

                n++;
            }
        }
        printf("o numero de impares serao: %d", n);
    }
    else if (n2 < n1)
    {
        for (i = n2; i <= n1; i++)
        {

            if (i % 2 != 0)
            {

                n++;
            }
        }
        printf("o numero de impares serao: %d", n);
    }
}

int main(void)
{

    int termo1, termo2;

    printf("digite um intervalo:\n");
    scanf("%d %d", &termo1, &termo2);

    printf("\nO intervalo sera: (%d,%d).", termo1, termo2);
    contaimpar(termo1, termo2);

    return 0;
}