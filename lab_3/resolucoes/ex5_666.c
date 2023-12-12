/*
Escrito por LuisVCSilva...

Essa questão talvez só possa ser resolvida usando arrays/vetores no mínimo,
conteúdo que ainda não foi visto..., idealmente seria utilizada uma pilha ou árvore de expressões e uma função recursiva para avaliar a expressão, mas essa
implementação com arrays e completamente contida dentro do main foi a que consegui conceber utilizando apenas o que foi visto na disciplina até aqui, e é claro, com um array para guardar a expressão, necessário para armazena-la e computar o seu resultado posteriormente.

Alguns problemas a serem resolvidos:
 - Divisao por zero -> regerar a expressao até que a exceção não exista...
 - Divisao deve resultar em um numero flutuante de duas casas idealmente, evitando o casting do resultado da divisao para inteiro, truncando valores...


Isso é um bom exercício para revisitarmos...
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(0));
    int resposta_usuario = -666;
    int tam_expr = 2 * (rand() % 5) + 1; // expressao de tamanho aleatorio
    int expr[tam_expr];

    // Gera expressao aleatoria
    for (int i = 0; i < tam_expr; i++) {
        if (i % 2 == 0) {
            expr[i] = rand() % 10; // numero aleatorio de 0-9
        } else {
            expr[i] = rand() % 4;  // operador aleatorio de 0-3 (+,-,*,/)
        }
    }

    // Imprime expressao
    for (int i = 0; i < tam_expr; i++) {
        if (i % 2) {
            printf("%c", "+-*/"[expr[i]]);
        } else {
            printf("%d", expr[i]);
        }
    }

    // Computa expressao, parte dificil...
    for (int i = 0; i < tam_expr - 2; i += 2) {
        if (expr[i + 1] == 1) {
            expr[i + 1] = 0;
            expr[i + 2] *= -1;
        }

        if (expr[i + 1] == 2) {
            expr[i + 2] = expr[i] * expr[i + 2];
            expr[i + 1] = 0;
            expr[i] = 0;
        } else if (expr[i + 1] == 3) {
            if (expr[i + 2] == 0) {
                printf("\nErro: Divisao por zero...\n");
                return -1;
            }
            expr[i + 2] = (float)expr[i] / expr[i + 2];
            expr[i + 1] = 0;
            expr[i] = 0;
        }
    }

    for (int i = 0; i < tam_expr - 2; i += 2) {
        if (expr[i + 1] == 0) {
            expr[i + 2] += expr[i];
        } else if (expr[i + 1] == 1) {
            expr[i + 2] = expr[i] - expr[i + 2];
        }
    }

    // Imprime a expressao
    //printf("=%.2f\n", tam_expr ? (float)expr[tam_expr - 1] : 0.0f);
    printf("= ");
    do{
    scanf("%d",&resposta_usuario);
    printf(resposta_usuario==(float)expr[tam_expr - 1] ? "\nVocê acertou!\n" : "Você errou...\n");
    }while(resposta_usuario!=(float)expr[tam_expr - 1]);
    return 0;
}

