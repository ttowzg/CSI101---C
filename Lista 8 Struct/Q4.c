#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{

    float x;
    float y;


};


struct Retangulo {

    struct Ponto pS1;
    struct Ponto pS2;
    struct Ponto pI1;
    struct Ponto pI2;
    struct Ponto random;
    

};


int main (void){

    
    float b, h;
    float area, perimetro, diagonal;
    struct Retangulo ret;

    printf("Ponto superior esquerdo:\n");

    printf("Digite ponto X: ");
    scanf("%f", &ret.pS1.x);
    printf("Digite ponto Y: ");
    scanf("%f", &ret.pS1.y);

    printf("Ponto inferior direito:\n");

    printf("Digite o ponto X: ");
    scanf("%f", &ret.pI1.x);
    printf("Digite o ponto Y: ");
    scanf("%f", &ret.pI1.y);

    printf("Ponto superior direito:\n");

    printf("Digite ponto X: ");
    scanf("%f", &ret.pS2.x);
    printf("Digite ponto Y: ");
    scanf("%f", &ret.pS2.y);

    printf("Ponto inferior esquerdo:\n");

    printf("Digite o ponto X: ");
    scanf("%f", &ret.pI2.x);
    printf("Digite o ponto Y: ");
    scanf("%f", &ret.pI2.y);

    printf("Digite um PONTO ALEATORIO para o teste: ");
    scanf("%f", &ret.random.x);
    scanf("%f", &ret.random.y);

    if(ret.random.x <= ret.pS2.x && ret.random.y <= ret.pS2.y && ret.random.x >= ret.pI2.x && ret.random.y >= ret.pI2.y){
        printf("\nESTA DENTRO\n");
    } else {
        printf("\nNAO ESTA DENTRO\n");
    }

  
    return 0;
}