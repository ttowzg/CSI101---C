#include <stdio.h>
#include <math.h>   
#include <stdlib.h>
int main (void){

    float l;  
    float pi;
    pi = 3.14159;
    int a;

    printf("digite um numero:");
    scanf("%i", &a);

    if (a == 1 || a == 2) {
        printf("digite o lado do quadrado:\n");
        scanf("%f",&l);
            
        float peri, area, r;

        r = l/2;
        peri = 2*pi*r;
        area = (pow(r,2))*pi;

        printf("o valor do perimetro eh %f\no valor da area eh %f\n", peri, area);  

    } else if (a == 3 || a == 4 || a == 5) {

        printf("digite o lado de um quadrado para calcular seu circulo circunscrito\n");
        scanf("%f",&l); 

        float hipo, r, peri, area, potencia;
        potencia = pow(l,2) + pow(l,2);
        hipo = sqrt(potencia);
        r = hipo / 2;
        peri = hipo * pi;
        area = pow(r,2) * pi;

        printf("o valor do perimetro eh %f\no valor da area eh %f", peri, area);

    }   else if (a > 5){

        printf("digite o numero do lado para calcular o triangulo:");        
            scanf("%f",&l); 

        float h, area, alt;
        alt = pow(l,2) - pow((l/2),2);
        h = sqrt(alt);
        area = (l * h) / 2;

        printf("o valor da area eh %f", area);


        } else {
                    
        printf ("\ninvalido");}

           
    




return 0;

}