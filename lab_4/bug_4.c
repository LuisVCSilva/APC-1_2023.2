#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Verificar se o caractere é uma vogal
    (caractere == 'a' || 'e' || 'i' || 'o' || 'u') ? printf("É uma vogal\n") : printf("Não é uma vogal\n");

    return 0;
}

