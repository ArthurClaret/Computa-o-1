//Leia um valor inteiro n, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3
//valores reais. Faça um programa que leia os 3 valores de cada caso de teste e apresente a média ponderada para cada
//caso, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. No exemplo a
//seguir temos n=4, ou seja, 4 casos de teste, cada um deles com 3 variáveis fornecidas como entrada e a média ponderada
//apresentada como saída:
//Exemplo de Entrada Exemplo da Saída correspondente
//4
//1.0 2.0 3.0 2.3
//6.5 4.3 6.2 5.7
//5.1 4.2 8.1 6.3
//8.0 9.0 10.0 9.3

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    
    int main() {
        
        int n, i;
        float x, y, z;
        float r;
        
        i=1;
    
        printf ("Digite o numero de casos desejados:\n");
    
        scanf ("%d", &n);
        
        while (i<=n) {
        
        printf("\n\nDigite os 3 valores do caso:\n");
        
        scanf("%f %f %f", &x, &y, &z);
        
        r = (x*2 + y*3 + z*5) / (2 + 3 + 5);
        
        printf ("A media ponderada e: \n%.2lf", r);
        
        i++;
        
    }
    
    printf("\n\nTeste finalizado");
    
    return 0;
        
}