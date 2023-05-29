#include <stdio.h>

int main (void)
{

    float v;
    int r;
    int h;
    float pi;

    printf("digite as dimensoes do seu cilindro: raio, altura\n");
    scanf("%d",&r);
    scanf("%d",&h);

    pi = 3.14159;

    v = 2*pi*r*h;

    printf("O volume do seu cilindro sera: %f",v);







    return 0;
}