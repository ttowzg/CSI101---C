#include <stdio.h>

int main (void){


    int numero;
    printf("\ndigite um numero de 1 a 12:");
    
    do{

        
        scanf("%d",&numero);

        switch (numero){
        case 1:
        printf("\n\njaneiro\n\n");
        break;

        case 2:
        printf("\n\nfevereiro\n\n");
        break;

        case 3:
        printf("\n\nmarco\n\n");
        break;

        case 4:
        printf("\n\nabril\n\n");
        break;

        case 5:
        printf("\n\nmaio\n\n");
        break;

        case 6:
        printf("\n\njunho\n\n");
        break;

        case 7:
        printf("\n\njulho\n\n");
        break;

        case 8:
        printf("\n\nagosto\n\n");
        break;

        case 9: 
        printf("\n\nsetembro\n\n");
        break;

        case 10:
        printf("\n\noutubro\n\n");
        break;

        case 11:
        printf("\n\nnovembro\n\n");
        break;

        case 12:
        printf("\n\ndezembro\n\n");
        break;
        default:
        printf("\n\ninvalido\n\n");
        }
        }while (numero != 0);
        
        return 0;
}   
