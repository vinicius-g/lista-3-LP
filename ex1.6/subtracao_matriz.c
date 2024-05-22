#include <stdio.h>

int main() {
    int mat[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}}, mat2[3][3] = {{3,2,1}, {3,2,1}, {3,2,1}}, mat_result[3][3], linha, coluna;

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            mat_result[linha][coluna] = mat[linha][coluna] - mat2[linha][coluna];
        }
    }

    printf("A matriz resultante:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", mat_result[linha][coluna]);
        }

        printf("\n");
    }
}