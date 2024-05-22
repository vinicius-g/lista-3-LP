#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {2,4,6,8,10}, {1,3,5,7,9}, {11,21,31,41,51}, {10,20,30,40,50}}, aux, linha, coluna;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = linha + 1; coluna < 5; coluna++) {
            aux = mat[linha][coluna];
            mat[linha][coluna] = mat[coluna][linha];
            mat[coluna][linha] = aux;
        }
    }

    printf("A matriz depois da inversao:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }
}