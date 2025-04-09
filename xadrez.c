#include <stdio.h>

// Definindo as funções para os movimentos das peças de xadrez

// Definindo a função para o movimento do bispo
void moverBispo(int casa1, int casa2){
    for (int movimentoV = 0; movimentoV < casa1; movimentoV++){
        for (int movimentoH = 0; movimentoH < casa2; movimentoH++){
            printf("Bispo: Diagonal cima e direita\n");
        } 
    }
}

// Definindo a função para o movimento da torre
void moverTorre(int casa){
    if (casa > 0) {
        printf("Torre: Direita\n");
        moverTorre(casa -1);
    }
}

// Definindo a função para o movimento da rainha
void moverRainha(int casa){
    if (casa > 0) {
        printf("Rainha: Esquerda\n");
        moverRainha(casa -1);
    }
}

//
int main() {
    moverBispo(5,1);
    moverTorre(5);
    moverRainha(8);
    

    // Definindo o movimento do cavalo
    int movimentoDuas = 2;
    int movimentoUma = 1;

    for (int movimentoCduas = 0;  movimentoCduas < 3; movimentoCduas++){
        for (int movimentoCuma = 0; movimentoCuma < 3; movimentoCuma++){
            if (movimentoCduas == movimentoDuas && movimentoCuma == movimentoUma){
                printf("Cavalo: Cima\n");
                printf("Cavalo: Cima\n");
                printf("Cavalo: Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
    
    return 0;
}