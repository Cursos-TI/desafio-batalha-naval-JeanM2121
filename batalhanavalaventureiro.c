#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void Navio4(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y + i] = 4; // Navio4
    }
}

void Navio3(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x - i][y - i] = 3; // Navio3
    }
}
void Navio2(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 2; // Navio2
    }
}
void Navio1(int tabuleiro[LINHAS][LINHAS], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; // Navio1
    }
}
void Tabuleiro1(int tabuleiro[LINHAS][LINHAS]) {
    printf("BATALHA NAVAL \n");
    printf("0 agua\n");
    printf("1 Navio1\n");
    printf("2 Navio2\n");
    printf("3 Navio3\n");
    printf("4 Navio4\n");
    
    printf("\n");
    printf("  A B C D E F G H I J\n");
     // Imprime as letras das colunas
    for (int i = 0; i < LINHAS; i++) {
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
    int tabuleiro[LINHAS][LINHAS] = {0};
   
    Navio4(tabuleiro, 6, 2, 3);
    Navio3(tabuleiro, 8, 8, 3);
    Navio2(tabuleiro, 1, 2, 3);
    Navio1(tabuleiro, 3, 5, 3);
    Tabuleiro1(tabuleiro);
   

    return 0;
}
