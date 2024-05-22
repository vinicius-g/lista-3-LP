#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,-3,4,-5}, {1,-2,3,4,-5}, {-1,-2,-3,-4,-5}, {1,2,3,4,5}, {-1,2,3,4,-5}}, linha, coluna, quant_neg = 0;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] < 0) {
                quant_neg++;
            }
        }
    }

    printf("Quantidade de numeros negativos: %d", quant_neg);
}