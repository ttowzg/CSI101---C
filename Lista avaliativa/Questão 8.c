#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int saldoinicial, dep, saq, numero;

do{
    printf("digite 1 para deposito, digite 2 para saque, digite 3 para sair:\n");
    scanf("%d", &numero); 

     if
        (numero == 3 && saldoinicial == 0){
        printf("CONTA ZERADA"); break;
        
        }else if(numero == 3 && saldoinicial > 0){

        printf("CONTA OPERACIONAL"); break;
       
       }else if(numero == 3 && saldoinicial < 0){

        printf("CONTA NEGATIVADA"); break;

       }

    printf("\nDigite o seu saldo: ");
    scanf ("%d", &saldoinicial);
    if (saldoinicial < 0){printf("\ninvalido\n"); break;}
    printf ("\nSeu saldo inicial sera %d\n", saldoinicial);
    
    if (numero == 1){
        
         printf("Qual quantia deseja depositar:");
         scanf("%d",&dep);
        
        saldoinicial += dep;
    
        printf("seu novo saldo sera de %d\n", saldoinicial);
    } else if(numero == 2) {

        printf("Qual quantia deseja sacar:");
        scanf("%d", &saq);

        saldoinicial = saldoinicial - saq;
        printf("Seu saldo sera %d agora\n", saldoinicial);

    } 
         
} while (numero < 4);
    

    return 0;
}