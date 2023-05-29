#include <stdio.h>
#include <string.h>

void p_linguagem(char str[]){

int i, j = 0;
int tamanho = strlen(str);
char pos = 'p';
char nova_string[tamanho];

for (i = 0; i < tamanho; j++, i++){

                nova_string[i] = pos;
                nova_string[i + 1] = str[i];


    if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){



        nova_string[j]  = str[i + pos];

    } 

}

printf("sua nova frase sera: %s.", nova_string);



}


int main (void) {

    char frase[90];

    printf("Digite sua frase: ");
    gets(frase);


    p_linguagem(frase);


    return 0;
}