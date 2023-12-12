#include <stdio.h>
int main () {
printf("entre com as notas");
float n1, n2, n3, res = 0;
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);
float resultado = (n1+n2+n3)/3.0;
if (resultado>=6) {
printf("APROVADO\n");
}
else {
printf("REPROVADO\n");
}
//resultado 
return 0;
}
