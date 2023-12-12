# Laboratório 2

Como começar a programar no Ubuntu GNU/Linux.


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
