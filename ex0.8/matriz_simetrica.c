#include <stdio.h>

int main() {
    int mat[3][3] = {{1,2,3}, {2,5,6}, {3,6,3}}, linha, coluna, simetrica = 1;

    printf("A matriz:\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {

            if (mat[linha][coluna] != mat[coluna][linha]) {
                simetrica = 0;
                break;
            }
        }

        if (!simetrica) {
            break;
        }
    }

    if (simetrica) {
        printf("A matriz eh simetrica!\n");
    } else {
        printf("A matriz nao eh simetrica!\n");
    }
}

// 1 2 3
// 4 5 6
// 1 2 3