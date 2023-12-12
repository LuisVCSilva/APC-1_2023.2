#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, delta, raiz_1, raiz_2, parte_real, parte_imaginaria;
    printf("Entre com coeficientes a,b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    // Raizes reais e diferentes -1 5 6
    if (delta > 0) {
        raiz_1 = (-b + sqrt(delta)) / (2 * a);
        raiz_2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nRaizes reais e diferentes\n");
        printf("raiz_1 = %.2lf and raiz_2 = %.2lf", raiz_1, raiz_2);
    }

    // Raizes reais e iguais 4 4 1
    else if (delta == 0) {
        raiz_1 = raiz_2 = -b / (2 * a);
        printf("\nRaizes reais e iguais\n");
        printf("raiz_1 = raiz_2 = %.2lf;", raiz_1);
    }

    // Raizes complexas 1 0 1
    else {
        printf("\nRaizes complexas\n");
        parte_real = -b / (2 * a);
        parte_imaginaria = sqrt(-delta) / (2 * a);
        printf("raiz_1 = %.2lf+%.2lfi and raiz_2 = %.2f-%.2fi", parte_real, parte_imaginaria, parte_real, parte_imaginaria);
    }
}
luis
