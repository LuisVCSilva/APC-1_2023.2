#include <stdio.h>

int main() {
    float w, h, p;
    printf("Digite o equivalente em �gua do pacote de neve (em g): ");
    scanf("%f", &w);
    printf("Digite a profundidade da neve no pacote (em cm): ");
    scanf("%f", &h);
    p = w / (10 * h);
    printf("A densidade da neve � de %f g/cm�.\n", p);
    return 0;
}


