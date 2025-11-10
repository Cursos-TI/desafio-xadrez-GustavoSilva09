#include <stdio.h>

// Função recursiva que move a Torre
void moverTorre(int casas) {
    if (casas > 0) { // condição de parada: só executa se ainda houver casas para mover
        printf("direita\n"); // imprime o movimento atual
        moverTorre(casas - 1); // chamada recursiva, diminui o número de casas restantes
    }
}

// Função recursiva que move o Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo controla o movimento vertical
        for (int i = 0; i < 1; i++) {
            printf("Cima, ");
            // Loop interno controla o movimento horizontal
            for (int j = 0; j < 1; j++) {
                printf("Esquerda\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva, repete o movimento até acabar as casas
    }
}  

// Função recursiva que move a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
}

int main() {
    // Teste das peças e seus movimentos
    printf("\nMovimentos da Torre:\n");
    moverTorre(5); // move a torre 5 casas

    printf("\nMovimentos do Bispo:\n");
    moverBispo(5); // move o bispo 5 vezes na diagonal

    printf("\nMovimentos da Rainha:\n");
    moverRainha(8); // move a rainha 8 casas

    printf("\nMovimentos do Cavalo\n");
    // O cavalo faz um movimento em "L" — duas casas para cima e uma para a direita.
    for (int i = 0, j = 0; i < 1 && j < 1; i++, j++) {
        // Loop interno: controla o movimento vertical (duas casas para cima)
        for (int k = 0; k < 3; k++) {
            if (k == 2) {
                // Quando chega na terceira "casa", muda a direção para a direita
                printf("Direita\n");
                break; // encerra o loop interno (fim do movimento em L)
            }

            // Para as duas primeiras iterações (k = 0 e k = 1), move para cima
            printf("Cima\n");
            continue; // volta ao topo do loop interno (repete o movimento vertical)
        }
    }

    return 0; 
}
