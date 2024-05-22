#include <stdio.h>

int main() {
    int mat[5][5] = {{1,0,0,0,0}, {0,2,0,0,0}, {0,0,0,0,0}, {0,0,0,4,0}, {0,0,0,0,5}}, linha, coluna, diagonal = 1;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] != 0 && linha != coluna) {
                diagonal = 0;
                break;
            }
        }
    }

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    if (diagonal) {
        printf("Eh uma matriz diagonal!\n");
    } else {
        printf("Nao eh uma matriz diagonal!\n");
    }
}