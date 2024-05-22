#include <stdio.h>

int main() {
    int mat[3][2] = {{4,5}, {4,5}, {4,6}}, vet[3] = {1,2,3}, vet_result[2], linha, coluna, i, soma;

    for (linha = 0; linha < 1; linha++) {
        for (i = 0; i < 2; i++) {
            soma = 0;

            for (coluna = 0; coluna < 3; coluna++) {
                soma += mat[coluna][i] * vet[coluna];
            }

            vet_result[i] = soma;
        }
    }

    printf("Matriz resultante:\n");

    for (coluna = 0; coluna < 2; coluna++) {
        printf("%d ", vet_result[coluna]);
    }
}