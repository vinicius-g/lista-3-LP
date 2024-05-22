#include <stdio.h>

int main() {
    int mat[5][5] = {{1,0,0,0,0}, {0,0,0,1,0}, {0,0,0,0,1}, {0,1,0,0,0}, {0,0,1,0,0}}, linha, coluna, i, permutacao = 1, elemento_nao_nulo;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    for (linha = 0; linha < 5; linha++) {
        elemento_nao_nulo = 0;

        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] != 0 && mat[linha][coluna] != 1) {
                permutacao = 0;
                break;
            }

            if (mat[linha][coluna] == 1 && elemento_nao_nulo == 0) {
                for (i = 0; i < 5; i++) {
                    if (mat[i][coluna] == 1 && elemento_nao_nulo == 0) {
                        elemento_nao_nulo = 1;
                    } else if (mat[i][coluna] == 1) {
                        permutacao = 0;
                        break;
                    }
                }
            } else if (mat[linha][coluna] == 1) {
                permutacao = 0;
                break;
            }

            if (elemento_nao_nulo == 0 && coluna == 4) {
                permutacao = 0;
                break;
            }

            if (!permutacao) {
                break;
            }
        }

        if (!permutacao) {
            break;
        }
    }

    if (permutacao) {
        printf("Eh uma matriz de permutacao!");
    } else {
        printf("Nao eh uma matriz de permutacao!");
    }
}