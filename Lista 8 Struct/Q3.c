#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{

    float x;
    float y;


};


struct Retangulo {

    struct Ponto pS;
    struct Ponto pI;
    

};


int main (void){

    
    float b, h;
    float area, perimetro, diagonal;
    struct Retangulo ret;

    printf("Ponto superior esquerdo:\n");

    printf("Digite ponto X: ");
    scanf("%f", &ret.pS.x);
    printf("Digite ponto Y: ");
    scanf("%f", &ret.pS.y);

    printf("Ponto inferior direito:\n");

    printf("Digite o ponto X: ");
    scanf("%f", &ret.pI.x);
    printf("Digite o ponto Y: ");
    scanf("%f", &ret.pI.y);

    b = ret.pI.x - ret.pS.x;
    h = ret.pS.y - ret.pI.y;

    perimetro = 2 * (b + h);
    area = b * h;
    diagonal = sqrt(pow(b,2) + pow(h, 2));

    printf("\nOs resultado serao:\n");
    printf("O perimetro: %.2f\n", perimetro); 
    printf("A area: %.2f\n", area); 
    printf("A diagonal: %.2f\n", diagonal); 

    return 0;
}