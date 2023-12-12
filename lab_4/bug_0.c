#include <stdio.h>

int main() {
    float valor = 3.14;

    switch (valor) {
        case 1:
            printf("Escolheu 1\n");
            break;
        case 2:
            printf("Escolheu 2\n");
            break;
        case 3.14:
            printf("Escolheu PI\n");
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}
