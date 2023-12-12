# Laboratório 2

O propósito deste laboratório é estabelecer uma familiaridade com a programação em linguagem C no ambiente Linux e a construção de pequenos programas.


# Instruções

Na tela inicial do sistema, abra um terminal, para isto, pressione as teclas CTRL + ALT + T juntas. Após isso crie uma pasta com seu nome no seguinte formato:

matricula_nome
Exemplo:

201401473_LuisViniciusCostaSilva
Utilize o seguinte comando no terminal para esta tarefa:

    mkdir matricula_nome

Entre na pasta utilizando o comando:

    cd matricula_nome

Para cada questão, crie um novo arquivo de código contendo a implementação do algoritmo solicitado na questão. Exemplo:

    nano exercicio_1.c

Um programa em C possui a seguinte estrutura básica (e alguns exemplos úteis):

    #include <stdio.h>
    
    int main () {
    //programe seu código aqui
    printf("Exemplo de imprima");
    printf("\n");//Exemplo de pular linha
    int n = 0;//exemplo de declaração de variável
    scanf("%d",&n);//exemplo de leitura de um valor inteiro e armazenamento na variável n
    if (n==0) {//exemplo de if-else
    
    }
    else {
    
    }
    return 0;
    }

Para compilar o programa escrito, utilize o seguinte comando no terminal:

    gcc exercicio_1.c -o exercicio_1

Caso a compilação seja bem sucedida, i.e: o programa está correto de acordo com a linguagem (não necessariamente com a lógica correta), você poderá executa-lo, senão corrija os erros apontados pelo compilador GCC.

Para executar o programa, digite:

    ./exercicio_1

Escreva um email para luisvinicius@ufcat.edu.br com o assunto "[apc-1] curso - lab_2". No corpo do email, adicione o seu nome e matrícula, e por fim anexe os arquivos ".c" correspondentes a resolução de cada questão da lista.

## Questões técnicas

 1. Escreva um programa que imprima o seu nome, curso e matrícula;
 2. Escreva um programa que leia e some dois números;
 3. Escreva um programa que leia três notas de 0 à 10, calcule a média aritmética de tais valores e imprima "Aprovado" caso o valor seja maior ou igual a 6, senão imprima "Reprovado";
 4. Escreva um programa que imprima "Olá Mundo" em inglês, português e espanhol, dependendo da nacionalidade do usuário;
 5. Escreva um programa que receba uma nota (em escala de 0 a 100) e atribua uma classificação com base na seguinte escala: A (90-100), B (80-89), C (70-79), D (60-69) e F (abaixo de 60).
 6. Escreva um programa que gere uma expressão aritmética aleatória e leia uma resposta do usuário, daí verifique se a resposta fornecida pelo usuário corresponde a expressão gerada pelo seu programa. Dica, utilize o seguinte trecho de código como base para gerar a expressão aleatória:
 

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    
    int main() {
        srand(time(0));
        int numeroAleatorio = rand();
        return 0;
    }

 7. [EXTRA e OPCIONAL] Pense sobre o problema-desafio da disciplina (problema do feirante e da balança), escreva um texto com as constatações até aqui e estratégias para resolução.

Lembrem-se, se possível, DRY & KISS!
Façam o máximo possível, da melhor maneira possível. 
