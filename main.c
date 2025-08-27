#include <stdio.h>
#include <math.h>

int main() {


	double x, y, z;
	double A, P, G, H;
	char dig;
	
	printf ("Escolha qual media que voce quer utilizar\nA: media aritmetica\nP: media ponderada\nG: media geometrica\nH: media harmonica\n");
    scanf ("%c", &dig);
    
    printf ("\nInsira o primeiro valor: ");
    scanf ("%lf", &x);
    printf ("\ninsira o segundo valor: ");
    scanf ("%lf", &y);
    printf ("\ninsira o tericeiro valor: ");
    scanf ("%lf", &z);
    
    A=(x+y+z)/3;
    P=(x+(y*2)+(z*3))/6;
    G=cbrt(x*y*z);
    H=3/((1/x)+(1/y)+(1/z));
    
    if (dig==A )
    
    


}