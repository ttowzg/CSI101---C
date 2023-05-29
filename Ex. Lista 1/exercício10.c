#include <stdio.h>

int main (void) {

int horario;
int minutos;
int atehora;

printf("qual hora quer?:\n");
scanf("%d",&horario);

printf("qual minuto indicas?:\n");
scanf("%d",&minutos);

atehora = (horario*60) + minutos;

printf("do horario indicado, ja se passaram %d minutos desde o inicio do dia:",atehora);

return 0;
}
