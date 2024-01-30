
# Arrays e recursão

### Questão 1

 1. Um jogo começa quando o usuário insere um número de balas n. Em seguida, o jogador pode devolver algumas balas, mas deve seguir estas regras:

     - Se n for par, então pode devolver exatamente n/2 balas.
     - Se n for divisível por 3 ou 4, então pode multiplicar os dois últimos dígitos de n e devolver essa quantidade de balas.
     - Se n for divisível por 5, então pode devolver exatamente 42 balas.
   
    O objetivo do jogo é terminar com exatamente 42 balas. Escreva uma função recursiva bool jogoDoDoce(int n) que retornará verdadeiro se for possível vencer o jogo com n balas, caso contrário retornará falso. A implementação deve ser feita usando recursão, sem usar loops.
    Exemplos:

 

 - Para n = 250
 
> Divisível por 5, retorne 42 doces.  Sobra 208 doces.
> Como 208 é par, devolva 104 doces.
 
> O que sobrou é 104 doces.
> Como 104 é par, devolva 104 doces.
 
> O que sobrou é 52.
> Como 52 é divisível por 4, retorne 10 doces.
> O que sobrou é 42. Você ganhou o jogo.

 - Para n = 85

> Divisível por 5, retorne 42 doces.  
> O que sobrou é 43. 43 é primo, Você perdeu o jogo.

### Questão 2


 - Dada uma estrutura triangular de números, encontre a soma do caminho mínimo da parte superior para a parte inferior.

     Restrições:
     
     - Existe apenas um caminho mínimo.
      - O caminho deve conter exatamente um elemento de cada linha do triângulo.
      - A primeira linha de entrada será a altura do triângulo, seguida pelos elementos em cada linha.
     
      Exemplo:

- Entrada:

   4
   3
6 4
5 2 7
9 1 8 6
- Saída:

   10

- Explicação: 3 + 4 + 2 +1 = 10

### Questão 3

     
 3. Você recebe um array de preços chamado precos, onde precos[i] é o preço de uma determinada ação no i-ésimo dia. Você deseja maximizar seu lucro escolhendo um único dia para comprar uma ação e escolhendo um dia diferente no futuro para vender essa ação. Escreva uma função maxLucro(precos) que receba o array precos como entrada e retorne o lucro máximo que você pode obter com a transação mencionada acima. Se não for possível obter lucro, retorne 0.

- Exemplo 1:
- Entrada:
> 6
> 7 1 5 3 6 4

- Saída:
> 5

- Explicação:
- Dado um array de preços de ações `precos = [7, 1, 5, 3, 6, 4]`, onde cada valor representa o preço da ação em um determinado dia:

-   No primeiro dia, o preço da ação é 7.
-   No segundo dia, o preço da ação é 1.
-   No terceiro dia, o preço da ação é 5.
-   No quarto dia, o preço da ação é 3.
-   No quinto dia, o preço da ação é 6.
-   No sexto dia, o preço da ação é 4.

Para maximizar o lucro, você precisa escolher o dia para comprar a ação (com o preço mais baixo) e o dia para vendê-la (com o preço mais alto) de modo a obter o maior lucro possível.


- Exemplo 2:
- Entrada:
> 5
> 7 6 4 3 1

- Saída:
> 0
 
  - Explicação:
  - Nenhuma transação, portanto lucro é zero.

### Questão 4


4. Dada uma matriz N x N, escreva um código que a rotacione em 90 graus no sentido horário. A rotação deve ser feita elemento a elemento, ou seja, você não pode utilizar uma matriz 2D auxiliar para armazenar a rotação. Dica: A matriz rotacionada é obtida pela transposição da matriz original seguida pela reversão de cada linha da matriz transposta.

- Exemplo 1:
- Entrada:
> 1 2 3

>4 5 6

> 7 8 9

- Saída:

> 7 4 1

>8 5 2

> 9 6 3

### Questão 5

5. Dada uma matriz MxN, imprima todos os elementos da matriz em ordem diagonal.
- Exemplo 1:
- Entrada:
> 5 4

> 1 2 3 4

> 5 6 7 8

> 9 10 11 12

> 13 14 15 16

> 17 18 19 20
- Saída:

> 1

> 5 2

> 9 6 3

> 13 10 7 4

> 17 14 11 8

> 18 15 12

> 19 16

> 20
