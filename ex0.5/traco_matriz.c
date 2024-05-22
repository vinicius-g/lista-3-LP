#include <stdio.h>

int main() {
    int mat[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,4,4,5}, {1,2,3,4,5}, {1,2,3,4,5}}, diagonal, traco = 0;

    for (diagonal = 0; diagonal < 5; diagonal++) {
        traco += mat[diagonal][diagonal];
    }

    printf("Traco da matriz: %d", traco);
}