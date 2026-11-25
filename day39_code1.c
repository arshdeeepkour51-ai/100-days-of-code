//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    int diagLen = rows < cols ? rows : cols;
    bool distinct = true;

    for (int i = 0; i < diagLen && distinct; i++) {
        for (int j = i + 1; j < diagLen; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}