#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int linha, linha_aux, coluna, coluna_aux, i, dir = 1, posx, posy, num_linhas, num_colunas;
    srand(time(0));

    printf("Informe o numero de linhas e colunas da matriz quadrada:\n");
    scanf("%d", &num_linhas);
    num_colunas = num_linhas;

    int mat[num_linhas][num_colunas];

    printf("A matriz inicial:\n");
    for (linha_aux = 0; linha_aux < num_linhas; linha_aux++) {
        for (coluna_aux = 0; coluna_aux < num_colunas; coluna_aux++) {
            mat[linha_aux][coluna_aux] = 0;
            printf("%d ", mat[linha_aux][coluna_aux]);
        }

        printf("\n");
    }
    printf("\n");

    posx = num_linhas/2;
    posy = posx;
    mat[posy][posx] = rand() % 10 + 1;

    for (linha_aux = 0; linha_aux < num_linhas; linha_aux++) {
        for (coluna_aux = 0; coluna_aux < num_colunas; coluna_aux++) {
            printf("%d ", mat[linha_aux][coluna_aux]);
        }

        printf("\n");
    }
    printf("\n");

    for (i = 1; i < num_linhas; i++) {
        for (coluna = 0; coluna < i; coluna++) {
            if (dir) {
                posx--;
            } else {
                posx++;
            }

            mat[posy][posx] = rand() % 11 + 1;

            for (linha_aux = 0; linha_aux < num_linhas; linha_aux++) {
                for (coluna_aux = 0; coluna_aux < num_colunas; coluna_aux++) {
                    printf("%d ", mat[linha_aux][coluna_aux]);
                }

                printf("\n");
            }
            printf("\n");
        }

        for (linha = 0; linha < i; linha++) {
            if (dir) {
                posy--;
            } else {
                posy++;
            }

            mat[posy][posx] = rand() % 10 + 1;

            for (linha_aux = 0; linha_aux < num_linhas; linha_aux++) {
                for (coluna_aux = 0; coluna_aux < num_colunas; coluna_aux++) {
                    printf("%d ", mat[linha_aux][coluna_aux]);
                }

                printf("\n");
            }
            printf("\n");
        }

        if (dir) {
            dir = 0;
        } else {
            dir = 1;
        }
    }

    for (coluna = 0; coluna < num_colunas - 1; coluna++) {
        if (dir) {
            posx--;
        } else {
            posx++;
        }

        mat[posy][posx] = rand() % 11 + 1;

        for (linha_aux = 0; linha_aux < num_linhas; linha_aux++) {
            for (coluna_aux = 0; coluna_aux < num_colunas; coluna_aux++) {
                printf("%d ", mat[linha_aux][coluna_aux]);
            }

            printf("\n");
        }
        printf("\n");
    }
}