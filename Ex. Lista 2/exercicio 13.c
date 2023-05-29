#include <stdio.h>

int main (void) {

    int nota;

    printf("digite sua nota: ");
    scanf("%d",&nota);

    if (nota > 8) {
        printf("equivale ao conceito A");
    } else if (nota == 8 && nota == 7) {
        printf("equivale ao conceito B");
    } else if (nota == 5 && nota ==6) {
        printf("equivale ao conceito C");
    } else if (nota <= 5) {
        printf("equivale ao conceito D");
    }











    return 0;
}