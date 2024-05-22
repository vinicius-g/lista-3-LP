#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {5,6,7,8,9}, {5,6,7,8,9}, {1,2,3,4,5}}, linha, sublinha = 0, coluna, subcoluna = 0, inicio_linha, inicio_coluna, quant_linhas, quant_colunas;

    printf("Matriz original:\n");

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    printf("Informe em que linha iniciar:\n");
    scanf("%d", &inicio_linha);

    while (inicio_linha > 5 || inicio_linha < 1) {
        printf("Selecione um inicio valido!\n");
        scanf("%d", &inicio_linha);
    }

    printf("Informe em que coluna iniciar:\n");
    scanf("%d", &inicio_coluna);

    while (inicio_coluna > 5 || inicio_coluna < 1) {
        printf("Selecione um inicio valido!\n");
        scanf("%d", &inicio_coluna);
    }

    printf("Informe a quantidade de linhas que deseja:\n");
    scanf("%d", &quant_linhas);

    while (quant_linhas > 5 - (inicio_linha - 1) || quant_linhas < 1) {
        printf("Nao eh possivel ter essa quantidade de linhas!\nSelecione outro valor:\n");
        scanf("%d", &quant_linhas);
    }

    printf("Informe a quantidade de colunas que deseja:\n");
    scanf("%d", &quant_colunas);

    while (quant_colunas > 5 - (inicio_coluna - 1) || quant_colunas < 1) {
        printf("Nao eh possivel ter essa quantidade de colunas!\nSelecione outro valor:\n");
        scanf("%d", &quant_colunas);
    }

    int submat[quant_linhas][quant_colunas];

    for (linha = inicio_linha - 1; linha < inicio_linha + (quant_linhas - 1); linha++) {
        subcoluna = 0;

        for (coluna = inicio_coluna - 1; coluna < inicio_coluna + (quant_colunas - 1); coluna++) {
            submat[sublinha][subcoluna] = mat[linha][coluna];
            subcoluna++;
        }

        sublinha++;
    }

    printf("Submatriz:\n");
    for (sublinha = 0; sublinha < quant_linhas; sublinha++) {
        for (subcoluna = 0; subcoluna < quant_colunas; subcoluna++) {
            printf("%d ", submat[sublinha][subcoluna]);
        }

        printf("\n");
    }
}