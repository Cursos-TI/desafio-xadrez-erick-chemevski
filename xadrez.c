#include <stdio.h>
#include <stdbool.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void MoverBispo(unsigned int casas, int opcaoDirecao) {
    const char *direcao; // Ponteiro para armazenar a string correta

    switch (opcaoDirecao) {
        case 1:
            direcao = "Bispo Moveu para cima\nBispo Moveu para direita\n";
            break;
        case 2:
            direcao = "Bispo Moveu para cima\nBispo Moveu para esquerda\n";
            break;
        case 3:
            direcao = "Bispo Moveu para baixo\nBispo Moveu para direita\n";
            break;
        case 4:
            direcao = "Bispo Moveu para baixo\nBispo Moveu para esquerda\n";
            break;
        default:
            direcao = "Direção inválida\n"; // Mensagem de erro
            break;
    }

    while (casas > 0) {
        printf("%s", direcao);
        casas--;
    }
}

void MoverTorre(unsigned int casas, int opcaoDirecao) {
    const char *direcao; // Ponteiro para armazenar a string correta

    switch (opcaoDirecao) {
        case 1:
            direcao = "Torre Moveu para cima\n";
            break;
        case 2:
            direcao = "Torre Moveu para baixo\n";
            break;
        case 3:
            direcao = "Torre Moveu para direita\n";
            break;
        case 4:
            direcao = "Torre Moveu para esquerda\n";
            break;
        
        default:
            direcao = "Direção inválida\n"; // Mensagem de erro
            break;
    }
    if(casas > 0){ //Coloquei dentro de um if pois como é um do - while, ele vai executar 1 iteração antes de saber se o número de movimentos é zero, assim não executa caso o usuário tenha digitado 0.
        do{
            printf("%s", direcao);
            casas--;
        }while (casas > 0);
    }
    
}

void MoverRainha(unsigned int casas, int opcaoDirecao) {
    const char *direcao; // Ponteiro para armazenar a string correta

    switch (opcaoDirecao) {
        case 1:
            direcao = "Rainha Moveu para cima\n";
            break;
        case 2:
            direcao = "Rainha Moveu para baixo\n";
            break;
        case 3:
            direcao = "Rainha Moveu para direita\n";
            break;
        case 4:
            direcao = "Rainha Moveu para esquerda\n";
            break;
        case 5:
            direcao = "Rainha Moveu para cima\nRainha Moveu para direita\n";
            break;
        case 6:
            direcao = "Rainha Moveu para cima\nRainha Moveu para esquerda\n";
            break;
        case 7:
            direcao = "Rainha Moveu para baixo\nRainha Moveu para direita\n";
            break;
        case 8:
            direcao = "Rainha Moveu para baixo\nRainha Moveu para esquerda\n";
            break;
        default:
            direcao = "Direção inválida\n"; // Mensagem de erro
            break;
    }

    for (; casas > 0; casas--) {
        printf("%s", direcao);
    }

}


int main() {
    int opcao, opcaoDirecao;
    char direcao[50];
    unsigned int casas;
    bool continuar = true;

    do{
        printf("Qual peça você deseja mover? (digite de 1 - 4)\n"); //Menu de escolha da peça
        printf("(1) Bispo\n");
        printf("(2) Torre\n");
        printf("(3) Rainha\n");
        printf("(4) Sair\n");

        scanf("%d", &opcao);

        if(opcao == 4){                         //Se opcao == 4 sai do programa, se não continua para as outras opções
            continuar = false;
            printf("Saindo do programa\n");
        }else{
            printf("Quantas casas você deseja mover?\n");   //Escolha do número de casas a se mover
            scanf("%u", &casas);
            switch (opcao)
            {
            case 1:
                printf("Qual direção deseja mover o bispo? (digite de 1 - 4)\n");   //Escolha da direção a se mover
                printf("(1) Diagonal Superior Direita\n");
                printf("(2) Diagonal Superior Esquerda\n");
                printf("(3) Diagonal Inferior Direita\n");
                printf("(4) Diagonal Inferior Esquerda\n");

                scanf("%d", &opcaoDirecao);
                MoverBispo(casas, opcaoDirecao);
                break;

            case 2:
                printf("Qual direção deseja mover a Torre? (digite de 1 - 4)\n");   //Escolha da direção a se mover
                printf("(1) Acima\n");
                printf("(2) Abaixo\n");
                printf("(3) Direita\n");
                printf("(4) Esquerda\n");

                scanf("%d", &opcaoDirecao);
                MoverTorre(casas, opcaoDirecao);
                break;

            case 3:
                printf("Qual direção deseja mover a Rainha? (digite de 1 - 8)\n");  //Escolha da direção a se mover
                printf("(1) Acima\n");
                printf("(2) Abaixo\n");
                printf("(3) Direita\n");
                printf("(4) Esquerda\n");
                printf("(5) Diagonal Superior Direita\n");
                printf("(6) Diagonal Superior Esquerda\n");
                printf("(7) Diagonal Inferior Direita\n");
                printf("(8) Diagonal Inferior Esquerda\n");

                scanf("%d", &opcaoDirecao);
                MoverRainha(casas, opcaoDirecao);
                break;
            
            default:
                printf("Opção de peça inválida, tente novamente\n");            //Se não for escolhida uma opção válida, retorna ao inicio do menu de peças
                break;
            }
            printf("\n");
        }
        
    }while(continuar);
    
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
