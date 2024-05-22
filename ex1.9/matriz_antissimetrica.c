#include <stdio.h>

int main() {
    int mat[5][5] = {{0,-2,3,4,-5}, {2,0,3,-4,5}, {-3,-3,0,1,-2}, {-4,4,-1,0,-3}, {5,-5,2,3,0}}, linha, coluna, antissimetrica = 1;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = linha; coluna < 5; coluna++) {
            if (mat[linha][coluna] != 0 && linha == coluna) {
                antissimetrica = 0;
                break;
            }

            if (mat[linha][coluna] != (mat[coluna][linha] * -1)) {
                antissimetrica = 0;
                break;
            }
        }

        if (!antissimetrica) {
            break;
        }
    }

    if (antissimetrica) {
        printf("A matriz eh antissimetrica!");
    } else {
        printf("A matriz nao eh antissimetrica!");
    }
}