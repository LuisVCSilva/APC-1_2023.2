#include <stdio.h>
#include <stdlib.h>
//FALTA TRATAR DIVISAO POR ZERO
int main()
{
int a = 0, b = 0, operacao, res;
for(;;){
printf("\n >>MENU<< \n");
printf("\n1  para >> adição << \n");
printf("2  para >> subtração << \n");
printf("3  para >> multiplicaçao << \n");
printf("4  para >> divisão << \n");
printf("5  para >> fechar programa << \n");
scanf("%d", &operacao);
if(operacao == 5){
break;
}
if(operacao>=1 && operacao<=4)
{
printf("coloque os dois numeros: \n");
scanf("%d",&a);
scanf("%d",&b);
}
switch (operacao)
{
   case 1:
      res = a+b;
      printf("%d + %d = %d\n",a,b,res);
      break;
   case 2:
      res = a-b;
      printf("%d - %d = %d\n",a,b,res);
      break;
   case 3:
      res = a*b;
      printf("%d x %d = %d\n",a,b,res);
      break;
   case 4:
      res = a/b;
      printf("%d / %d = %d\n",a,b,res);
      break;
    case 5:
        printf("\nprograma vai ser encerrado\n");
        break;
    default:
        printf("\n opçao invalida");
}
}
}

