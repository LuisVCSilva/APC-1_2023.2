#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: \n");
    scanf(" %c", &caractere);

    // Verificar se o caractere é uma vogal.
    //ele nao esta reconhecendo e sabendo diferenciar as vogais, por causa que a condiçao nao estava comparando as
    //vogais com a variavel caractere.
    //coloquei "caractere" antes se cada possibilidade para vogal.

    (caractere == 'a' || caractere=='e' || caractere=='i' || caractere=='o' || caractere=='u') ? printf("É uma vogal\n") : printf("Não é uma vogal\n");

    return 0;
}
