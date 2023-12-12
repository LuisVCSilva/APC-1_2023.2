#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int a = rand() % 100;
    int b = rand() % 100;
    int sinal = rand() % 4;
    int resultado;
    char operadorChar;

    //ps: proximos exercicios pedirao mais termos, avaliar precedencia de operadores eh especialmente dificil mas factivel, uso de parenteses pede estruturas de dados nao vistas em APC-1, mas eh uma boa curiosidade para o aluno pesquisar...
    switch (sinal) {
        case 0:
            resultado = a + b;
            operadorChar = '+';
            break;
        case 1:
            resultado = a - b;
            operadorChar = '-';
            break;
        case 2:
            resultado = a * b;
            operadorChar = '*';
            break;
        case 3://ps: tratar melhor o caso da divisao, divisao de dois inteiros trunca o resultado... exemplo 41/10 = 4 pelo programa escrito, mas ok.
            resultado = a / b;
            operadorChar = '/';
            break;
    }
    printf("Qual é o resultado da expressão %d %c %d? ", a, operadorChar, b);

    int resposta;
    scanf("%d", &resposta);

    if (resposta == resultado)
    {
        printf("Resposta correta!\n");
    } 
    else
    {
        printf("Resposta incorreta. O resultado correto é %d.\n", resultado);
    }

    return 0;
}
