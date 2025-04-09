# Jogo de Movimentos de Xadrez

Este programa em C implementa os movimentos básicos de algumas peças de xadrez (bispo, torre, rainha e cavalo) de forma simplificada. Ele demonstra como cada peça se move no tabuleiro, utilizando funções e estruturas de repetição.

## Peças e seus Movimentos

### Bispo
O bispo se move em diagonais. No programa, a função `moverBispo` simula o movimento do bispo para cima e para a direita, repetindo o movimento conforme os parâmetros fornecidos.

### Torre
A torre se move em linhas retas, tanto na horizontal quanto na vertical. A função `moverTorre` simula o movimento da torre para a direita, utilizando recursão.

### Rainha
A rainha combina os movimentos da torre e do bispo, podendo se mover em linhas retas e diagonais. No programa, a função `moverRainha` simula o movimento da rainha para a esquerda, também utilizando recursão.

### Cavalo
O cavalo se move em um padrão de "L", ou seja, duas casas em uma direção e uma casa em outra direção perpendicular. No programa, o movimento do cavalo é simulado com loops aninhados que verificam as condições para o movimento.

## Como Executar o Programa

1. Certifique-se de ter um compilador C instalado, como o GCC.
2. Compile o programa com o comando:
    ```bash
    gcc -o movimentos_xadrez mm4.c
    ```
3. Execute o programa:
    ```bash
    ./movimentos_xadrez
    ```
