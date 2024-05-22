#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,6,4,5}}, linha, coluna, elemento, encontrou = 0;

    printf("A matriz:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }

        printf("\n");
    }

    printf("Informe o elemento que voce quer procurar:\n");
    scanf("%d", &elemento);

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (mat[linha][coluna] == elemento) {
                printf("Elemento %d encontrado na linha %d, na coluna %d", elemento, linha, coluna);
                encontrou = 1;
                break;
            }
        }

        if (encontrou) {
            break;
        }
    }

    if (!encontrou) {
        printf("O elemento %d nao foi encontrado na matriz!", elemento);
    }
}