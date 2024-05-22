#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}}, linha, coluna, i, soma_linha, soma_coluna;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        soma_linha = 0;
        soma_coluna = 0;

        for (coluna = 0; coluna < 5; coluna++) {
            soma_linha += mat[i][coluna];
        }

        for (linha = 0; linha < 5; linha++) {
            soma_coluna += mat[linha][i];
        }

        printf("Soma linha %d: %d\n", i, soma_linha);
        printf("Soma coluna %d: %d\n", i, soma_coluna);
    }
}