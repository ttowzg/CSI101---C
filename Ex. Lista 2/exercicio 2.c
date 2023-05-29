#include <stdio.h>
#include <math.h>

int main (void) {

float a = 1.5;
int b = 4;
int c = 2;
int d = 3;
float e = 1.2;
float f = 4.3;
float conta1;
float conta2;
float conta3;
float conta4;

conta1 = (a*(c+d))/(b*(e+f));
conta2 = (pow(a,b+c))/(e+f) + d;
conta3 = (a+(pow(c+d,2))/(pow(b,2))*b)*1/c;
conta4 = ((-b)+(sqrt((pow(b,2))-(4*a*c))))/(2*a);

printf("a conta 1 dara: %f\na conta 2 dara: %f\na conta 3 dara: %f\na conta 4 dara: %f ",conta1, conta2,conta3,conta4);



return 0;
}