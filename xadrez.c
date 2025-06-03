#include <stdio.h>

// ======== TORRE (Recursividade) =========
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ======== BISPO (Recursividade + Loops Aninhados) =========
void moverBispo(int casas) {
    if (casas == 0) return;

    // Movimento diagonal: Cima Direita
    for (int v = 0; v < 1; v++) { // Loop externo: vertical
        for (int h = 0; h < 1; h++) { // Loop interno: horizontal
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1);
}

// ======== RAINHA (Recursividade) =========
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ======== CAVALO (Loops Complexos com múltiplas variáveis e condições) =========
void moverCavalo() {
    // Movimenta o Cavalo 2 casas para Cima e 1 para Direita
    // Usando loops complexos com controle de fluxo

    printf("Movimento do Cavalo (2 casas para Cima, 1 casa para Direita):\n");

    int movimentos = 1; // Apenas 1 movimento "em L"
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                continue; // pula para a próxima iteração para concluir as 2 casas para cima
            }

            if (j == 2) {
                printf("Direita\n");
                break; // encerra o loop após o movimento completo em L
            }
        }
    }
}

int main() {
    // ===== TORRE =====
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);

    // ===== BISPO =====
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5);

    // ===== RAINHA =====
    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(8);

    // ===== CAVALO =====
    printf("\n");
    moverCavalo();

    return 0;
}
