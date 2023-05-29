#include <stdio.h>
#include <stdlib.h>

int idade(int a, int m, int d)
{

    int Dias;

    Dias = (a * 365) + (m * 30) + d;

    return Dias;
}

int main(void)
{

    int anos, meses, dias, conversao;

    printf("Digite sua idade em anos meses e dias, respectivamente, para converter em dias somente:\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    conversao = idade(anos, meses, dias);

    printf("\nVoce possui %d dias de vida!", conversao);

    return 0;
}