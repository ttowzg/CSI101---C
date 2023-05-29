#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("digite o tamanho dos lados que deseja para seu triangulo:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

        if (a == b == c){
            printf("eh equilatero");
        } else if (a == b){
             printf("eh isosceles");
            } else if (a != b != c ){
                printf("eh escaleno");
            }
                
                







return 0;
}