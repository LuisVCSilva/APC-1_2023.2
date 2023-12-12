#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
char resp = ' ';
int flag = 0;
int opcao=-1;
srand(time(NULL));
int n=rand()%6+1;
printf("O jogo começou! \n");
  while(flag==0 && opcao<=6) {
  printf("adivinhe o numero de 1 à 6\n");
  scanf("%d",&opcao);
    if(opcao==n) {
        printf("você acertou\n");
        printf("tentar novamente? (s/n)\n");
        scanf(" %c", &resp);
        switch (resp)  {
            case 's':
              flag = 0;
        srand(time(NULL));
        n = rand()%7;
        break;
      case 'n':
              flag = 1;
      break;
            }
      }
      else 
      {
        printf("você errou\n");
    printf(opcao>n ? "Voce chutou alto\n" : "Voce chutou baixo\n");
            }
  }
return 0;
}