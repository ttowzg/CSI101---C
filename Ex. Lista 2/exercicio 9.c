#include <stdio.h>
#include <math.h>

int main(void) {

    int x;
    int y;

    printf("digite seu x e y para identificar qual quadrante ele está.\n");
    printf("Seu X:");
    scanf("%d",&x);
    printf("Seu Y:");
    scanf("%d",&y);

    if ( x > 0 && y > 0) {
        printf("esta no primeiro quadrante\n");
    } else if ( x < 0 && y > 0) {
        printf("esta no segundo quadrante\n");
    } else if (x < 0 && y < 0) {
        printf("esta no terceiro quadrante\n");
    } else if (x > 0 && y < 0) {
        printf("esta no quarto quadrante");
    }


    return 0;
}