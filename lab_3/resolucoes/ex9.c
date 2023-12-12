#include <stdio.h>

int main(){
double S = 1.0;
int i = 1;
    //printf("%f",2-S);
    while(2 - S > 1E-5){
    printf("\n%f",2-S);
    S += 1.0/pow(2,i);
    i++;
    }
 printf("\nQtde de interacoes: %d\n", i);
 return 0;
}
