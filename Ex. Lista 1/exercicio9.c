#include <stdio.h>

int main (void) {

int j;
int c;
int i;
int t;
int m;

    printf ("digite o capital incial,tempo mais o juros unitario:\n");
    scanf ("%d",&c);
    scanf ("%d",&t);
    scanf ("%d",&i);

    j = c*i*t;

    printf("pronto, agora temos os juros total %d:\n", j);

    m = c + j;

    printf("o montante sera: %d\n:",m);


    printf("o total de juros obtido nos %d meses sera: %d" ,t,j);

return 0;
}
