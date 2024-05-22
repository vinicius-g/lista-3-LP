#include <stdio.h>

int main() {
    int mat[3][2] = {{1,2}, {3,4}, {5,6}}, mat2[2][4] = {{7,8,9,10}, {1,2,3,4}}, mat_result[3][4], linha, coluna, i, soma;

    for (linha = 0; linha < 3; linha++) {
        for (i = 0; i < 4; i++) {
            soma = 0;

            for (coluna = 0; coluna < 2; coluna++) {
                soma += mat[linha][coluna] * mat2[coluna][i];
            }

            mat_result[linha][i] = soma;
        }
    }

    printf("A matriz resultante:\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 4; coluna++) {
            printf("%d ", mat_result[linha][coluna]);
        }
        printf("\n");
    }
}