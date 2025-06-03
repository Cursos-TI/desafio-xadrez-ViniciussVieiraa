#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
       // Simulando o movimento da Torre (5 casas para a Direita)
    // Estrutura usada: for
    printf("Movimento da Torre (5 casas para Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulando o movimento do Bispo (5 casas na Diagonal para Cima e Direita)
    // Estrutura usada: while
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Simulando o movimento da Rainha (8 casas para a Esquerda)
    // Estrutura usada: do-while
    printf("\nMovimento da Rainha (8 casas para Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

      
    // Movimento do Cavalo   
    // O cavalo se move 2 para Baixo e 1 para Esquerda
    // Usaremos um for para as 2 casas para Baixo
    // E um while aninhado para a 1 casa para Esquerda

    printf("\nMovimento do Cavalo (2 casas para Baixo, 1 casa para Esquerda):\n");

    int movimentos = 1; // Apenas 1 movimento em "L"
    for (int m = 0; m < movimentos; m++) {
        // Movimento vertical: duas casas para Baixo
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }

        // Movimento horizontal: uma casa para Esquerda (loop aninhado)
        int passo = 0;
        while (passo < 1) {
            printf("Esquerda\n");
            passo++;
        }


    return 0;
}
