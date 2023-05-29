#include <stdio.h>
#include <string.h>

struct Data{
    int dia;
    int mes;
    int ano;
};


struct Aluno{

    char Nome[99];
    char curso[99];
    int idade;
    
    double Notas[3];
    struct Data nasc;


};


int main (void){

    float mediapond;
    int i = 0;
    int n;

    int soma1;
    int soma2;
    int soma3;

    struct Aluno al;

    printf("Digite o numero de discentes da turma: ");
    scanf("%d", &n);


    printf("Faca seu cadastro.\n");

    while(i < n){

        i++;

        int j;

        fflush(stdin);

        printf("\nDigite seu Nome:");
        gets(al.Nome);
        printf("Digite seu Curso: ");
        gets(al.curso);
        printf("\nDigite sua Idade: ");
        scanf("%d", &al.idade);
        printf("\nDigite sua Data de Nascimento\n");
        printf("Dia:");
        scanf("%d", &al.nasc.dia);
        printf("Mes:");
        scanf("%d", &al.nasc.mes);
        printf("Ano:");
        scanf("%d", &al.nasc.ano);
        printf("\n");
        printf("Digite suas 3 notas:\n");
        for (j = 0; j < 3; j++){   
                    scanf("%lf", &al.Notas[j]);
                   
                   if(j == 0){
                    soma1 = al.Notas[0]*2;
                   } else if(j == 1){
                    soma2 = al.Notas[1]*3;
                   } else if(j == 2){
                    soma3 = al.Notas[2]*4;
                   }

                 }

                 
             
            
        
        mediapond = (float)(soma1 + soma2 + soma3)/3;

        

        printf("\nNome: %s", al.Nome);
        printf("\nCurso: ");
        printf("%s", al.curso);
        printf("\nIdade: %d anos", al.idade);
        printf("\nData de Nascimento: %d/%d/%d", al.nasc.dia, al.nasc.mes, al.nasc.ano);
        printf("\nAs notas serao:\n");
        for (j = 0; j < 3; j++){
            printf("%.2lf\n",al.Notas[j]);
        } 
        printf("\nA media ponderada da sua nota sera: %3.f", mediapond);   

        

        mediapond = 0;
        al.idade = 0;
        al.nasc.dia = 0;
        al.nasc.mes = 0;
        al.nasc.ano = 0;


       

    }
    
    return 0;
}