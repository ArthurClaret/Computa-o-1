// Dados 3 valores A, B, C (lados do triângulo) fornecidos pelo usuário via teclado, implemente um programa para veriﬁcar
//se estes valores formam um triângulo, e em caso aﬁrmativo, classiﬁcá-lo como equilátero, isósceles ou escaleno (imprimir
//mensagem informando o tipo ou uma mensagem especíﬁca caso não formem um triângulo

#include <stdio.h>
#include <math.h>

int main() {
    
    float A, B, C;
    
    printf ("Escolha os valores para cada lado do triangulo: \n\n");
    
    printf ("\nValor do lado A: ");
    scanf ("%f", &A);
    
    printf ("\nValor do lado B: ");
    scanf ("%f", &B);
    
    printf ("\nValor do lado C: ");
    scanf ("%f", &C);
    
    if (!(A+B>C && A+C>B && B+C>A)){
      printf ("\nNao e um triangulo");
      return 0;
    }
    
    if (A==B && B==C){
    
    printf ("E um triangulo equilatero");
    
    }
    else if (A!=B && B!=C && C!=A)
    
    printf ("E um triangulo ")
    
    
    
}
