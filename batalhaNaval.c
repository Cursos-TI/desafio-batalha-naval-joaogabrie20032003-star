

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =========================
    // Nível Novato
    // =========================
    printf("=== Nível Novato ===\n");
    int tabuleiroNovato[5][5] = {0};

    // Navio vertical (3 partes) na coluna 1, linhas 0-2
    for (int i = 0; i < 3; i++) {
        tabuleiroNovato[i][1] = 1;
        printf("Navio vertical: (%d, %d)\n", i, 1);
    }

    // Navio horizontal (3 partes) na linha 4, colunas 2-4
    for (int j = 2; j < 5; j++) {
        tabuleiroNovato[4][j] = 2;
        printf("Navio horizontal: (%d, %d)\n", 4, j);
    }

    printf("\n");

    // =========================
    // Nível Aventureiro
    // =========================
    printf("=== Nível Aventureiro ===\n");
    int tabuleiroAventureiro[10][10] = {0};

    // Navio vertical (4 partes) na coluna 2, linhas 0-3
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][2] = 3;
    }

    // Navio horizontal (4 partes) na linha 7, colunas 5-8
    for (int j = 5; j < 9; j++) {
        tabuleiroAventureiro[7][j] = 3;
    }

    // Navio diagonal principal (4 partes) de (0,0) a (3,3)
    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[k][k] = 3;
    }

    // Navio diagonal secundária (4 partes) de (0,9) a (3,6)
    for (int l = 0; l < 4; l++) {
        tabuleiroAventureiro[l][9 - l] = 3;
    }

    // Exibir tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiroAventureiro[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    // =========================
    // Nível Mestre
    // =========================
    printf("=== Nível Mestre ===\n");

    // Cone
    printf("Cone:\n");
    int cone[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j == 2) cone[i][j] = 1;
            if (i == 1 && (j >= 1 && j <= 3)) cone[i][j] = 1;
            if (i == 2) cone[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Octaedro
    printf("Octaedro:\n");
    int octaedro[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 2) && j == 2) octaedro[i][j] = 1;
            if (i == 1 && (j >= 1 && j <= 3)) octaedro[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Cruz
    printf("Cruz:\n");
    int cruz[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1) cruz[i][j] = 1;
            if ((i == 0 || i == 2) && j == 2) cruz[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
