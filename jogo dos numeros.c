//Faça um programa que sorteie um número aleatório entre 1 e 500 e então peça ao usuário para adivinhar este valor. O
//programa deverá indicar a cada tentativa do usuário se ela é maior ou menor que o número mágico e contar o número
//de tentativas. Quando o usuário conseguir acertar o número, o programa deverá classificar o usuário como: (a) de 1 a
//3 tentativas: \o/; (b) d 4 a 6 tentativas: :-D; (c) de 7 a 10 tentativas: :-) e (d) Mais que 10 tentativas: :-\

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    

    int main() {
        
    int n, p, i = 0;
    
    srand(time(NULL));
    
    n = rand() % 500 + 1;
    
    
    do {
        printf("Tente adivinhar o numero entre 1 e 500: \n");
        scanf("%d", &p);
        
        i++;
        
        if (p < n) {
            printf("O numero magico e maior! Tente novamente.\n\n");
        } else if (p > n) {
            printf("O numero magico e menor! Tente novamente.\n\n");
        } else {
            printf("Parabens! Voce acertou o numero!\n\n");
           
            if (i <= 3) {
                printf("/o/\n");
            } else if (i <= 6) {
                printf(":-D\n");
            } else if (i <= 10) {
                printf(":-)\n");
            } else {
                printf(":-/\n");
            }
        }
    } while (p != n);
    
    printf("Numero de tentativas: %d\n", i);
    
    return 0;
}
