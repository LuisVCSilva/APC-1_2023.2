
# Laboratório 5

Este laboratório abordará questões aplicadas à problema de ciência e engenharia, utilizando os conhecimentos adquiridos anteriormente

## Questões técnicas

 1. Faça um programa que calcule a distância entre dois pontos em um espaço $\mathbb{R_2}$ (derive a fórmula da distância e utilize-a no seu algoritmo)
	 
 2. A Torre Eiffel tem 324 metros de altura e é construída em ferro. Quanto varia sua altura de um dia quente de agosto para um dia frio de janeiro?  Um dia quente em agosto tem uma média de 25˚C, e um dia frio em janeiro tem uma média de 2,5˚C.  Para calcular a mudança de altura temos que investigar as propriedades térmicas do ferro. A mudança na dimensão da torre pode ser expressa usando a equação:  $\frac{\Delta L}{L} = \alpha_L \Delta T$  onde $\Delta L$ representa as mudanças no comprimento, $\Delta T$ a mudança na temperatura, $L$ o comprimento original e $\alpha$  o coeficiente de expansão térmica linear ($10^{-6}$˚C). Para ferro $\alpha=11,1 \times 10^{-6}$ ºC. Escreva um programa que calcule da Torre Eiffel em agosto considerando sua altura em janeiro.


 3. A densidade média da neve é definida como a razão entre seu equivalente em H2O e o volume do pacote de neve, expresso em g/cm³ (ou kg/m³):

   $p = \frac{w}{10h}$
   
   Onde w é o equivalente em água do pacote de neve (o peso da água derretida em gramas) e h é a profundidade da neve no pacote (em centímetros). Escreva um programa para calcular a densidade da neve com base no equivalente em água e na profundidade da neve.

 4. Ao produzir alimentos de longa durabilidade, o processo de conservação pode ser projetado para eliminar o deterioramento e garantir a segurança microbiana. A probabilidade de deterioramento é utilizada para estimar o número de recipientes deteriorados dentro de um lote total de produtos processados.

Se o objetivo do processo de conservação é alcançar uma probabilidade de sobrevivência de um microrganismo para todos os recipientes processados, então:

   $r = \frac{10^{F/D}}{N_0}$

onde r é o número de recipientes expostos ao processo de conservação, $N_0$ é a população inicial de microrganismos deteriorantes em cada recipiente, $F$ é o tempo de morte térmica, e $D$ é o tempo de redução decimal (o tempo necessário para uma redução de 90% na população microbiana). O valor no lado esquerdo da equação representa o número total de recipientes processados $(r)$ resultando em um recipiente com deterioração.

Estime a probabilidade de deterioração de um processo de 45 minutos a 118°C quando $D_{118}​=3,5$ minutos e a população microbiana inicial é $2×10^5$ por recipiente.
