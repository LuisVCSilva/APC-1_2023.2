#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
