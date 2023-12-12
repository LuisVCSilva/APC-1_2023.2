#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
    if (num <= 1) {
       return false;
    }    
    
    for (int x = 2; x * x <= num; x++) {  
       if (num % x == 0) {      
          return false;
    }
    }      return true;
}

int main() { 
int numero;   
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (primo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }
   
return 0;
}
