# Calc_LED

- Este código é um programa em linguagem C que calcula o valor de um resistor para limitar a corrente em um LED, com base nas informações fornecidas pelo usuário sobre o valor da tensão de entrada (Vin), da tensão do LED (Vled) e da corrente que se deseja passar pelo LED (Iled). O programa utiliza a lei de Ohm para calcular o valor do resistor necessário (R = (Vin - Vled) / Iled).
- O programa inclui um loop while que executa o cálculo e a exibição do valor do resistor para dois conjuntos de valores Vin, Vled e Iled. O loop será executado enquanto o valor de N for menor que 10
- Após a execução do loop, o programa pausa para permitir que o usuário visualize os resultados e, em seguida, retorna 0 para indicar que a execução foi concluída com sucesso. O comando "system("pause")" é específico do ambiente de desenvolvimento Microsoft Windows e é usado para pausar a execução do programa e exibir uma mensagem para o usuário pressionar uma tecla para continuar.
