#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    double resultado = 0.0;



    for (int i = 0; i < n; ++i) {
    int res_fat = 1;
 	   for(int k=i;k>1;k--) {
 	   res_fat *= k;
 	   }
        resultado += pow(x, i) / res_fat;
    }

    printf("Aproximação de e^%.2f usando %d termos: %.6f\n", x, n, resultado);

    return 0;
}
