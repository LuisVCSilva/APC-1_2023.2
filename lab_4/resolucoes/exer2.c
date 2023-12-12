#include <stdio.h>

int main(void) 
{
float nota = 0.0;
float soma = 0.0;
float media = 0.0;
int errada = 0;
int k = 0;

while(1)
  {
  do
    {
    printf("digite uma nota de 0 a 10 ou -1 para sair: \n");
    scanf("%f", &nota);
      errada = (nota < 0 || nota > 10);
      if(errada)
      {
        if(nota == -1)
        {
          break;
        }
      printf(">> nota invalida <<\n Tente novamente!\n...\n");
      }
    }while(errada);
  if(nota == -1)
    {
    break;
    }
  soma = soma + nota;
  k++;
  }
  if(k == 0)
    {
    printf(">> nenhuma nota foi digitada <<\n");
    }
  else
    {
    media = soma / k;
    printf(">> a media eh: %.2f <<\n", media);
    }
  
return 0;
}