#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10


void Navio4(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int l = 0; l < tamanho; l++) {
        tabuleiro[x + l][y + l] = 4; //Navio4
    }
}

void Navio3(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int k = 0; k < tamanho; k++) {
        tabuleiro[x - k][y - k] = 3; //Navio3
    }
}
void Navio2(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int j = 0; j < tamanho; j++) {
        tabuleiro[x + j][y] = 2; //Navio2
    }
}
void Navio1(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; //Navio1
    }
}
void Tabuleiro1(int tabuleiro[LINHAS][COLUNAS]) {
    printf("BATALHA NAVAL \n");
    printf("0 agua\n");
    printf("1 Navio1\n");
    printf("2 Navio2\n");
    printf("3 Navio3\n");
    printf("4 Navio4\n");
    
    printf("\n");
    printf("  A B C D E F G H I J\n");
     // Imprime as letras das colunas
    for (int i = 0; i < COLUNAS; i++) {
        printf("%d ", i + 1); 
        // Imprime os números das linhas
    for (int j = 0; j < LINHAS; j++) {
        printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
}
// Posição dos navios
int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};
   
    Navio4(tabuleiro, 1, 5, 3); //Diagonal
    Navio3(tabuleiro, 3, 8, 3); //Diagonal
    Navio2(tabuleiro, 5, 9, 3); //Vertical
    Navio1(tabuleiro, 5, 1, 3); //Horinzontal
    Tabuleiro1(tabuleiro); //Tabuleiro
   

    return 0;
}
