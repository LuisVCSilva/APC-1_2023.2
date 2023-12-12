#include <stdio.h>
#include <stdlib.h>

int main () {
printf("1 >> Circulo\n");
printf("2 >> Triangulo\n");
printf("3 >> Retangulo\n");
int opcao = -1;
while(opcao!=1 && opcao!=2 && opcao!=3)
{
printf("Digite a opcao: \n");
scanf("%d",&opcao);
}
float raio = 0.0;
float base = 0.0;
float altura = 0.0;
float area = 0.0;
if(opcao==1) {
printf("\nEntre com o raio do circulo:");
scanf("%f",&raio);
}
else if(opcao==2 || opcao==3) {
printf("\nEntre com a base e altura:");
scanf("%f",&base);
scanf("%f",&altura);
}
else {
printf("\nOpcao incorreta");
exit(1);
}
area = opcao==1 ? 3.14*raio*raio :  (opcao==2 ? (base*altura)/2.0 : base*altura);
printf("\nA area eh : %f\n",area);
return 0;
}
