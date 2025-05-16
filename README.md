# Desafio de Xadrez - MateCheck

## Descrição

Este código em C serve como base para um sistema de movimentação de peças de xadrez. O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

## Funcionalidades

O programa permite ao usuário escolher uma peça de xadrez e definir a direção e o número de casas que a peça deve se mover. As peças disponíveis são:

* Bispo
* Torre
* Rainha
* Cavalo

O programa utiliza funções recursivas e loops para simular o movimento das peças no tabuleiro.

## Como Usar

1.  **Escolha da Peça:** O programa exibe um menu com as opções de peças de xadrez. Digite o número correspondente à peça que deseja mover.
2.  **Definição do Movimento:**
    * Para Bispo, Torre e Rainha, digite o número de casas que a peça deve se mover e a direção do movimento.
    * Para o Cavalo, apenas a direção do movimento é necessária, pois o número de casas é fixo.
3.  **Visualização do Movimento:** O programa exibirá a sequência de movimentos da peça.

## Direções de Movimento

* **Bispo:**
    * 1: Diagonal Superior Direita
    * 2: Diagonal Superior Esquerda
    * 3: Diagonal Inferior Direita
    * 4: Diagonal Inferior Esquerda
* **Torre:**
    * 1: Acima
    * 2: Abaixo
    * 3: Direita
    * 4: Esquerda
* **Rainha:**
    * 1: Acima
    * 2: Abaixo
    * 3: Direita
    * 4: Esquerda
    * 5: Diagonal Superior Direita
    * 6: Diagonal Superior Esquerda
    * 7: Diagonal Inferior Direita
    * 8: Diagonal Inferior Esquerda
* **Cavalo:**
    * 1: Acima -> Direita
    * 2: Acima -> Esquerda
    * 3: Abaixo -> Direita
    * 4: Abaixo -> Esquerda
    * 5: Direita -> Acima
    * 6: Direita -> Abaixo
    * 7: Esquerda -> Acima
    * 8: Esquerda -> Abaixo

## Compilação e Execução

Para compilar e executar o programa, siga os passos abaixo:

1.  **Compilação:**
    * Abra o terminal ou prompt de comando.
    * Navegue até o diretório onde o arquivo `xadrez.c` está salvo.
    * Utilize um compilador C (como o GCC) para compilar o código:
        ```bash
        gcc xadrez.c -o xadrez
        ```
2.  **Execução:**
    * Após a compilação, execute o programa:
        ```bash
        ./xadrez
        ```

## Estrutura do Código

O código é organizado em funções que implementam a movimentação de cada peça:

* `PrintRecursivo`: Função para imprimir os movimentos de forma recursiva.
* `PrintBispoRecursivo`: Função para imprimir os movimentos do bispo de forma recursiva.
* `MoverBispo`: Função para mover o Bispo.
* `MoverTorre`: Função para mover a Torre.
* `MoverRainha`: Função para mover a Rainha.
* `MoverCavalo`: Função para mover o Cavalo.
* `main`: Função principal que controla o fluxo do programa, exibe o menu e recebe a entrada do usuário.
