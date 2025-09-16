#include <stdio.h>
#include <math.h>
#define PRIMEIRA 1
#define ULTIMA 19

    int main() {
        
        int  quantidade_1,  quantidade_2;
        float valor;
        
        printf ("Digite a quantidade:");
        scanf ("%d", &quantidade_1);
        
        printf ("\nDigite a quantidade:");
        scanf ("%d", &quantidade_2);
        
        valor = (quantidade_1 + quantidade_2) * (ULTIMA - PRIMEIRA) /2;
        
        printf ("\nO valor final é: %.2lf", valor);
        
        if (valor>quantidade_1) {
        
            printf ("\nO resultado é %.2lf e as quantidades são %d e %d", valor,
            quantidade_1, quantidade_2);
        }
        else 
        
            printf ("\nO resultado é %.2lf e as quantidades são %d e %d", valor*0.8,
            quantidade_1, quantidade_2);
        

    }