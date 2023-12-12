#include <stdio.h>

int main() {
    int numero = 5;

    switch (numero) {
        case 1:
            printf("Escolheu 1\n");
            break;
        case 2:
            printf("Escolheu 2\n");
            break;
        case numero > 3:
            printf("Número maior que 3\n");
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}
