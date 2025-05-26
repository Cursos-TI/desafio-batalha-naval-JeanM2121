#include <stdio.h>


//navio 1(Array inidimensional)

void Navio1(int tabuleiro[10][10], int x, int y, int tamanho){
    for (int i = 0; i < tamanho; i++){
        tabuleiro[x][y + i] = 1;
    }
}
// navio 2(Array unidimensional)
void Navio2(int tabuleiro[10][10], int x, int y, int tamanho){
    for (int i = 0; i < tamanho; i++){
        tabuleiro[x + i][y] = 2;
    }
}

//Tabuleiro (Array bidimensional) com loops aninhados em FOR

void Tabuleiro(int tabuleiro[10][10]){
    printf("\n");
    printf("*** BATALHA NAVAL*** \n");
    printf("0 representa agua \n");
    printf("1 representa Navio 1 \n");
    printf("2 representa Navio 2 \n");
    printf("\n");
    printf("  A B C D E F G H I J \n");
    for (int i = 0; i < 10; i++){
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");   
    }   
}
//Posições dos navios 
int main(){
    int tabuleiro[10][10] = {0};
    Navio1(tabuleiro, 2, 3, 3);
    Navio2(tabuleiro, 5, 6, 3);
    Tabuleiro(tabuleiro);

    return 0;
}
