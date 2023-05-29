#include <stdio.h>
#include <math.h>

int main(void)
{   int x;
    int y; // por algum motivo nao leu x1 x2
    int delta;
    int a;
    int b;
    int c;

        printf("Digite o numero para a constante a, b, c:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

            delta = b*b - (4*a*c);
            x = (-b - sqrt(delta))/(2 * a); 
            y = (-b + sqrt(delta))/(2 * a);
                
                printf("%d\n", delta);

                    if (delta == 0)
                    {
                      x = -b / (2*a);
                      printf("Existe apenas uma solucao: %d\n", x);                    
                    } else if (delta < 0) 
                    {
                    printf("Nao existe solucao\n");
                    } else {
                    
                    printf("os valores para x1 e x2 serao respectivamente: %d e %d",x,y);
                    
                    }

            
    


return 0;
}