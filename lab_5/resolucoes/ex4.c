#include <stdio.h>
#include <math.h>

int main() {

    double r = 0.0;//n�mero de recipientes expostos ao processo de conserva��o;
    double n0 = 2e+5;//popula��o inicial de microrganismos deteriorantes;
    double f =  45;//tempo de morte t�rmica;
    double d = 3.5;//tempo de redu��o decimal;
    r = pow(10,(f/d))/n0;
   printf("O n�mero de recipientes expostos ao processo de conserva��o e de %2le \n", r );

   return 0;
}


