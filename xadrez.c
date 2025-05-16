#include <stdio.h>
#include <stdbool.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void PrintRecursivo(char* direcao, int casas){ //função para printar os movimentos de forma recursiva
    if(casas > 0){
        printf(direcao);
        PrintRecursivo(direcao, casas-1);
    }
}

void PrintBispoRecursivo(int casas, char* direcaoVertical, char* direcaoHorizontal) {
    if (casas == 0) return; // Condição de parada

    printf(direcaoVertical); // Movimento vertical

    // Loop interno para o movimento horizontal
    for (int i = 0; i < 1; i++) {
        printf(direcaoHorizontal);
    }

    PrintBispoRecursivo(casas - 1, direcaoVertical, direcaoHorizontal); // Chamada recursiva reduzindo casas
}

void MoverBispo(unsigned int casas, int opcaoDirecao) {
    char *direcaoVertical, *direcaoHorizontal; // Ponteiro para armazenar a string correta

    switch (opcaoDirecao) {
        case 1:
            direcaoVertical = "Bispo Moveu para cima\n";
            direcaoHorizontal = "Bispo Moveu para direita\n";
            break;
        case 2:
            direcaoVertical = "Bispo Moveu para cima\n";
            direcaoHorizontal = "Bispo Moveu para esquerda\n";
            break;
        case 3:
            direcaoVertical = "Bispo Moveu para baixo\n";
            direcaoHorizontal = "Bispo Moveu para direita\n";
            break;
        case 4:
            direcaoVertical = "Bispo Moveu para baixo\n";
            direcaoHorizontal = "Bispo Moveu para esquerda\n";
            break;
        default:
            direcaoVertical = "Direção inválida\n"; // Mensagem de erro
            direcaoHorizontal = "";
            casas = 1;
            break;
    }
    PrintBispoRecursivo(casas, direcaoVertical, direcaoHorizontal);
}


void MoverTorre(unsigned int casas, int opcaoDirecao) {
    char *direcao; // Ponteiro para armazenar a string correta

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
            casas = 1;
            break;
    }
    PrintRecursivo(direcao, casas);
    
}

void MoverRainha(unsigned int casas, int opcaoDirecao) {
    char *direcao; // Ponteiro para armazenar a string correta

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
            casas = 1;
            break;
    }

    PrintRecursivo(direcao, casas);

}

void MoverCavalo(int opcaoDirecao) {
    const char *direcaoUmaCasa; // Ponteiro para armazenar a string correta
    const char *direcaoDuasCasas;
    int i, j;
    
    switch (opcaoDirecao) {
        case 1:
            direcaoDuasCasas = "Cavalo Moveu para cima\n";
            direcaoUmaCasa = "Cavalo Moveu para direita\n";
            break;
        case 2:
            direcaoDuasCasas = "Cavalo Moveu para cima\n";
            direcaoUmaCasa = "Cavalo Moveu para esquerda\n";
            break;
        case 3:
            direcaoDuasCasas = "Cavalo Moveu para baixo\n";
            direcaoUmaCasa = "Cavalo Moveu para direita\n";
            break;
        case 4:
            direcaoDuasCasas = "Cavalo Moveu para baixo\n";
            direcaoUmaCasa = "Cavalo Moveu para esquerda\n";
            break;
        case 5:
            direcaoDuasCasas = "Cavalo Moveu para direita\n";
            direcaoUmaCasa = "Cavalo Moveu para cima\n";
            break;
        case 6:
            direcaoDuasCasas = "Cavalo Moveu para direita\n";
            direcaoUmaCasa = "Cavalo Moveu para baixo\n";
            break;
        case 7:
            direcaoDuasCasas = "Cavalo Moveu para esquerda\n";
            direcaoUmaCasa = "Cavalo Moveu para cima\n";
            break;
        case 8:
            direcaoDuasCasas = "Cavalo Moveu para esquerda\n";
            direcaoUmaCasa = "Cavalo Moveu para baixo\n";
            break;
        default:
            direcaoDuasCasas = "Direção inválida\n";
            direcaoUmaCasa = "Direção inválida\n";  // Mensagem de erro
            break;
    }
    if(direcaoUmaCasa == "Direção inválida\n"){
        printf(direcaoUmaCasa);
    }else{
        for (int i = 0, j = 0; i < 1; i++) { // Loop externo controla o movimento principal
            while (j < 3) { // Loop interno controla execuções específicas
                if (j == 2) { // Condição para o último movimento
                    printf("%s", direcaoUmaCasa);
                    break; // Sai do loop após mover para a direita
                }

                printf("%s", direcaoDuasCasas);
                
                j++;
            }
        }
    }
}




int main() {
    int opcao, opcaoDirecao;
    char direcao[50];
    unsigned int casas;
    bool continuar = true;

    do{
        printf("Qual peça você deseja mover? (digite de 1 - 5)\n"); //Menu de escolha da peça
        printf("(1) Bispo\n");
        printf("(2) Torre\n");
        printf("(3) Rainha\n");
        printf("(4) Cavalo\n");
        printf("(5) Sair\n");

        scanf("%d", &opcao);

        if(opcao == 5){                         //Se opcao == 4 sai do programa, se não continua para as outras opções
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

            case 4:
                printf("\n***Número de casas é desconsiderado para Cavalo***\n");
                printf("Qual direção deseja mover o Cavalo? (digite de 1 - 8)\n");  //Escolha da direção a se mover
                printf("(1) Acima -> Direita\n");
                printf("(2) Acima -> Esquerda\n");
                printf("(3) Abaixo -> Direita\n");
                printf("(4) Abaixo -> Esquerda\n");
                printf("(5) Direita -> Acima\n");
                printf("(6) Direita -> Abaixo\n");
                printf("(7) Esquerda -> Acima\n");
                printf("(8) Esquerda -> Abaixo\n");
                scanf("%d", &opcaoDirecao);
                MoverCavalo(opcaoDirecao);
                break;
            
            default:
                printf("Opção de peça inválida, tente novamente\n");            //Se não for escolhida uma opção válida, retorna ao inicio do menu de peças
                break;
            }
            printf("\n");
        }
        
    }while(continuar);

    return 0;
}
