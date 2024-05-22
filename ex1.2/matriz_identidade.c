#include <stdio.h>

int main() {
    int mat[5][5] = {{1,0,0,0,0}, {0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1}}, linha, coluna, identidade = 1;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] != 1 && linha == coluna) {
                identidade = 0;
                break;
            }

            if (mat[linha][coluna] != 0 && linha != coluna) {
                identidade = 0;
                break;
            }
        }

        if (!identidade) {
            break;
        }
    }

    if (identidade) {
        printf("Eh uma matriz identidade!");
    } else {
        printf("Nao eh uma matriz identidade!");
    }
}