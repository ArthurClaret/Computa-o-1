#include <stdio.h>

int main() {
    
    int a, b, c, d = 1;  
    
    
    printf("Digite um número:\n ");
    scanf("%d", &a);
    
   
    c = a % 10;
    
    
    while (a > 0) {
        b = a % 10; 
        if (b != c) {
            d = 0;  
            break;
        }
        a = a / 10;  
    }
    

    if (d) {
        printf("Os digitos sao todos iguais!\n");
    } else {
        printf("Os digitos nao sao todos iguais!\n");
    }
    
    return 0;
}
