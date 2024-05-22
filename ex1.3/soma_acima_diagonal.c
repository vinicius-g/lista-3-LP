#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,6}}, linha, coluna, soma = 0;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = linha; coluna < 5; coluna++) {
            soma += mat[linha][coluna];
        }
    }

    printf("A soma dos elementos acima da diagonal principal: %d", soma);
}