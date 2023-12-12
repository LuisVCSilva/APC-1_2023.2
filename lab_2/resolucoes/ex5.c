#include <stdio.h>
int main () {
float nota = 0.0;
printf("Entre com sua nota \n");
scanf("%f", &nota);
if (nota>=90 & nota<=100){
printf("A");
}
else if (nota>=80 & nota<90){//correcao nos limites
printf("B");
}
if (nota>=70 & nota<80){
printf("C");
}
if (nota>=60 & nota<70){
printf("D");
}
if (nota<60){
printf("F");
}
printf("\n");
}

