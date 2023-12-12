
# Questões extras -- Opcional


 1. Faça um programa que receba um tempo em segundos e imprima um timer no formato mm:ss, considere zeros à esquerda para casos de um único algarismos e particionamento de valores de segundo que excedem 60, formatando a parte excedente na parte do minuto, de tal forma que a saída represente corretamente a entrada.
	 
 2. Faça um jogo de Pedra-Papel-Tesoura.


 3. O ponto de orvalho nos informa sobre a umidade absoluta. O ponto de orvalho é a temperatura que o ar deve atingir para que ocorra a condensação. Quanto maior a umidade, mais próxima a temperatura do ar está do ponto de orvalho. Quando a umidade é de 100%, o ponto de orvalho e a temperatura são iguais. O ponto de orvalho nunca pode ser maior do que a temperatura do ar em um determinado momento.

 A umidade pode ser medida de várias maneiras, mas mais comumente é relatada como "umidade relativa". A umidade relativa (UR) é a relação entre a quantidade de umidade no ar em comparação com a quantidade que o ar é capaz de conter a uma determinada temperatura, expressa em porcentagem. Portanto, uma umidade relativa de 50% indica que o ar, na temperatura atual, contém 50% da umidade que é capaz de conter. Em climas muito secos, a UR é baixa, enquanto em climas úmidos, é alta. Os seres humanos tendem a reagir com desconforto a pontos de orvalho elevados. Aqueles acostumados a climas continentais frequentemente começam a sentir desconforto quando o ponto de orvalho atinge entre 15 e 20 °C.

 O cálculo para o ponto de orvalho em graus Celsius, com precisão de ±0.4°C, é dado pela fórmula de Magnus.


 $T_d = \frac{b · \gamma(T, RH)}{a  \gamma(T, RH)}$


 onde:

    - T é a temperatura em graus Celsius,
    - RH é a umidade relativa como uma fração (não em percentagem),
    - Td é a temperatura do ponto de orvalho a ser calculada,

 e:

 $ \gamma(T,RH) = \left ( \frac{aT}{b+T}\right)$ + ln(RH)$


 e a = 17.27 e b = 237.7

 Esse modelo é válido para as seguintes condições:

    0°C<T<60°C0°C<T<60°C,
    
    0.01<RH<1.00.01<RH<1.0,
    
    0°C<Td<50°C0°C<Td<50°C.
    
    
