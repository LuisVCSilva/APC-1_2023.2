#include <stdio.h>

int main() 
{
  //ele estava utilizando uma estrutura de repetição chamada "while" porem é um ciclo finito onde tanto (i) como (j) vao de um ate 3, portanto optei a utilizaçao de uma estrutura de repetiçao "for".
  //tambem foi observado que nao declarou uma variavel para o resultado.
  int i, j;
  for (i = 1; i <= 3; i++)
    {
    for(j = 1; j <= 3; j++)
      {
        int resultado = i * j;
        printf("%d x %d = %d\n", i, j, resultado);
      }
      printf("\n");
    }

    return 0;
}