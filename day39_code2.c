//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int mat[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    int limit = rows < cols ? rows : cols;
    for (int i = 0; i < limit; i++) {
        sum += mat[i][i];
    }

    printf("%d\n", sum);
    return 0;
}