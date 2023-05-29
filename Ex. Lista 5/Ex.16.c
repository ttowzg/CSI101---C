#include <stdio.h>
#include <string.h>

void p_linguagem(char str[]){

int i;
int tamanho = strlen(str);

for (i = 0; i < tamanho; i++){

    if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
        str[i] = 'p';
    }

}

printf("sua nova frase sera: %s.", str);



}


int main (void) {

    char frase[90];

    printf("Digite sua frase: ");
    gets(frase);


    p_linguagem(frase);


    return 0;
}