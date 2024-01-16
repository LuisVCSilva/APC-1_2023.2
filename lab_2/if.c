#include <stdio.h>

int main() {
    int a = 0, b = 0, resposta = 0;

    printf("Entre com os valores de A e B");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0) {
        printf("Entradas inválidas\n");
    }
    else {
        if (a > b) {
            int aux = a;
            a = b;
            b = aux;
        }
        if (b % 2 == 0)
            resposta = b / 2 + a;
        else if (a % 2 == 0)
            resposta = b - a / 2;
        else
            resposta = 2 * (b - a);
        printf("Resposta: %d\n", resposta);
    }

    return 0;
}
