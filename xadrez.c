#include <stdio.h>

int main() {

    int torre = 0, bispo, rainha = 0, cavalo = 1;
    //Movimentação do Bispo
    //Estrutura de repetição "for" para simular a movimentação do Bispo em diagonal.
    for (bispo = 0; bispo < 5; bispo++){
        printf("Bispo cinco casas na diagonal para cima e à direita\n");
    }
    //Movimentação da Torre
    //Estrutura de repetição "while" para simular a movimentação da Torre para a direita.
    while (torre < 5){
        printf("Torre cinco casas para a direita\n");
        torre++;
    }
    //Movimentação da Rainha
    //Estrutura de repetição "do-while" para simular a movimentação da Rainha para a esquerda.
    do {
        printf("Rainha oito casas para a esquerda\n");
        rainha++;
    } while (rainha < 8);
    //Movimentação do Cavalo
    //Loops aninhados para simular a movimentação do Cavalo em L.
    while (cavalo--){
        for (int movimentoCavalo = 0; movimentoCavalo < 2; movimentoCavalo++){
            printf("Cavalo duas casas para baixo\n");
        }
        printf("Cavalo uma casa para esquerda\n");
    }
    
    
    {
        
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
