#include <stdio.h>

int main() {
    int mat[5][5] = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {1,2,3,4,5}}, quant_nulos = 0, quant_termos = 0, linha, coluna;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] == 0) {
                quant_nulos++;
            }

            quant_termos++;
        }
    }

    printf("A matriz: \n");

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    if (quant_termos <= (quant_nulos * 100) / 50) {
        printf("A matriz eh esparsa!\n");
    } else {
        printf("A matriz nao eh esparsa!\n");
    }

}