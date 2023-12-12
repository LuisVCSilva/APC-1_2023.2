#include <stdio.h>

int main() 
{
  //foi visto que na estrutura condicional, tinha uma intencao de colocar uma opçao (número > 3), que nao é possivel fazer em uma extrutura de switch/case. 
  //portanto substituí por outra estrutura condicional.
    int numero = 5;

    if (numero==1)
      printf("Escolheu 1\n");

    else if (numero==2)
            printf("Escolheu 2\n");

    else if (numero > 3)
            printf("Número maior que 3\n");
  
    else
            printf("Escolha inválida\n");

    return 0;
}
