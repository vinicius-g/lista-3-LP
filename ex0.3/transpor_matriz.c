#include <stdio.h>

int main() {
    int mat[3][2] = {{1,2}, {3,4}, {5,6}}, mat_transp[2][3], linha, coluna;

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 2; coluna++) {
            mat_transp[coluna][linha] = mat[linha][coluna];
        }
    }

    printf("A matriz transposta:\n");

    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", mat_transp[linha][coluna]);
        }

        printf("\n");
    }
}