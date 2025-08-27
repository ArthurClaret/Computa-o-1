#include <stdio.h>
#include <math.h>

int main() {


	double x, y, z;
	double A, P, G, H;
	char dig;
	
	printf ("Escolha qual media que voce quer utilizar\nA: media aritmetica\nP: media ponderada\nG: media geometrica\nH: media harmonica\n\n");
    scanf ("%c", &dig);
    
    if (dig!='A' && dig!='P' && dig!='G' && dig!='H'){
        printf ("\nO valor inserido não é valido!");
        return 0;
    }
    
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
    
    
    if (dig=='A')
        printf ("\nResultado da media aritmetica é: %.2lf", A);
    
    if (dig=='P')
        printf ("\nResultado da media ponderada é: %.2lf", P);
        
    if (dig=='G')
        printf ("\nResultado da media geometrica é: %.2lf", G);
    
    if (dig=='H')
        printf ("\nResultado da media hormonica é: %.2lf", H);
    
return 0;
}