#include <stdio.h>
#include <math.h>

int main() {

    double r = 0.0;//número de recipientes expostos ao processo de conservação;
    double n0 = 2e+5;//população inicial de microrganismos deteriorantes;
    double f =  45;//tempo de morte térmica;
    double d = 3.5;//tempo de redução decimal;
    r = pow(10,(f/d))/n0;
   printf("O número de recipientes expostos ao processo de conservação e de %2le \n", r );

   return 0;
}


