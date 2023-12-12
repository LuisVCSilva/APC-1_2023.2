#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("Escolha sua nacionalidade \n 1-Brasileiro\n 2-Espanhol\n 3-Americano\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Olá Mundo\n");
                break;
            case 2:
                printf("Hola Mundo\n");
                break;
            case 3:
                printf("Hello World\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (escolha < 1 || escolha > 3);

    return 0;
}

