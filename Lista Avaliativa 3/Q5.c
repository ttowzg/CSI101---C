#include <stdio.h>
#include <math.h>


struct coordenadas {
    
    int x;
    int y;
    
};

int main(void) {

    float distancia;
    struct coordenadas pontos;
    
    printf("Digite duas coordenada (dois pontos) para o calculo da distancia a partir de (0,0):\n");
    printf("\n");
    scanf("%d", &pontos.x);
    scanf("%d", &pontos.y);

    distancia = (float)sqrt(pow(0 - pontos.x, 2) + pow(0 - pontos.y, 2));

    printf("\nA distancia sera aproximadamente %.3f entre a origem e (%d,%d)", distancia, pontos.x, pontos.y);    




    return 0;
}