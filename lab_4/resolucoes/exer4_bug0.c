#include <stdio.h>
#include <math.h>
#define EPSILON 1E-3

int AreSame(double a, double b) {
    return fabs(a - b) < EPSILON;
}

int main() 
{
   double valor = 3.14, auxiliar = valor;
  //percebi que o swtch/case nao aceita variavel FLOAT, entao comecei a fazer outro metodo de condiçoes, dado que seria mais viavel que trocar FLOAT por INT.
  //float nao tem uma quantidade precisa de casas decimais, por isso foi preciso definir epsilon.
    if (valor == 1) 
    {
            printf("Escolheu 1\n");
    }
    if (valor == 2)
    {
            printf("Escolheu 2\n");
    }
    if (AreSame((double) 3.14,valor))
    {
            printf("Escolheu PI\n");
    }
    else
    {
            printf("Escolha inválida\n");
    }

    return 0;
}
