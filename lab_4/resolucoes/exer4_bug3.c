#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
//neste caso teriamos um loop infinito.
//o loop se deve ao 'j' que nunca iria sair do valor 1 pois dentro do segundo "for"
//deveria ter uma atualizaçao para 'j' e nao para o 'i'