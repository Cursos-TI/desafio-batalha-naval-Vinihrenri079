#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // criado a matriz 10 x 10
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Posicionar um navio horizontal na linha 1 (B), colunas 0 a 2
    for (int linhas = 0; linhas < 3; linhas++) {
        tabuleiro[1][linhas] = 1;
    }

    // Posicionar um navio vertical na coluna 4, linhas 2 a 4 (C, D, E)
    for (int colunas = 2; colunas <= 4; colunas++) {
        tabuleiro[colunas][4] = 1;
    }

    // Exibir cabeçalho das colunas
    printf("   "); // Espaço para alinhar com as letras das linhas
    for (int linhas = 0; linhas < 10; linhas++) {
        printf("%d ", linhas);
    }
    printf("\n");

    // Exibir o tabuleiro com letras nas linhas
    for (int colunas = 0; colunas < 10; colunas++) {
        printf("%c  ", letras[colunas]); // Letra da linha
        for (int linhas = 0; linhas < 10; linhas++) {
            if (tabuleiro[colunas][linhas] == 1) {
                printf("Z ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
