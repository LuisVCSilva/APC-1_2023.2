#include <stdio.h>
#include <math.h>

int main() {
    double forca, deslocamento, angulo, trabalho;

    // Solicita ao usuário que insira os valores da força, deslocamento e ângulo
    printf("Digite a magnitude da forca (F): ");
    scanf("%lf", &forca);

    printf("Digite o deslocamento (s): ");
    scanf("%lf", &deslocamento);

    printf("Digite o angulo entre a forca e o deslocamento (em graus): ");
    scanf("%lf", &angulo);

    // Converte o ângulo de graus para radianos para usar a função cos
    angulo = angulo * M_PI / 180.0;

    // Calcula o trabalho usando a fórmula W = F * s * cos(theta)
    trabalho = forca * deslocamento * cos(angulo);

    // Exibe o resultado
    printf("O trabalho realizado pela forca eh: %lf\n", trabalho);

    return 0;
}
