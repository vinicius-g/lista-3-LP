#include <stdio.h>

int main() {
    int mat[3][2] = {{1,2}, {3,4}, {5,6}}, mat2[3][2] = {{7,8}, {9,10}, {1,2}}, mat_result[3][2], linha, coluna;

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            mat_result[linha][coluna] = mat[linha][coluna] + mat2[linha][coluna];
        }
    }

    printf("A matriz resultante:\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            printf("%d ", mat_result[linha][coluna]);
        }
        printf("\n");
    }
}