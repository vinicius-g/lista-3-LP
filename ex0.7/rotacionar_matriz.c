#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {5,4,3,2,1}, {1,2,3,4,5}, {5,4,3,2,1}, {1,2,3,4,5}}, linha, coluna, aux;

    printf("Matriz original:\n");

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        for (coluna = linha; coluna < 5; coluna++) {
            aux = mat[linha][coluna];
            mat[linha][coluna] = mat[coluna][linha];
            mat[coluna][linha] = aux;
        }
    }

    printf("Matriz rotacionada 90 graus no sentido horario:\n");

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }
}