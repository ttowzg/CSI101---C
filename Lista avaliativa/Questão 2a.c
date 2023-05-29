#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int masculino = 0, feminino = 0, naobinario = 0, outro = 0;
    int i = 0;
    char genero = 0;

    for (i = 1;i <=30;i++){
        printf("digite seu genero:\n");
        scanf(" %c",&genero);
        if (genero == 'm'){masculino += 1;}
         else if (genero == 'f'){feminino += 1;}
          else if (genero == 'n'){naobinario += 1;}
           else if (genero == 'o'){outro += 1;} 
            else {printf("\ninvalido\n");}

        
    }
    
    printf("o numero de masculinos sao %d\n", masculino);
    printf("o numero de femininos sao %d\n", feminino);
    printf("o numero de nao binarios sao %d\n", naobinario);
    printf("o numero de outros sao %d", outro);


    return 0;
}
