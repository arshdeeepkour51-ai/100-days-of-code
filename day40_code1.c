//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        return 1;
    }

    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int row = 0, col = 0, upward = 1;
    int total = r * c;

    for (int k = 0; k < total; k++) {
        printf("%d%s", mat[row][col], k < total - 1 ? " " : "");

        if (upward) {
            if (col == c - 1) {
                row++;
                upward = 0;
            } else if (row == 0) {
                col++;
                upward = 0;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == r - 1) {
                col++;
                upward = 1;
            } else if (col == 0) {
                row++;
                upward = 1;
            } else {
                row++;
                col--;
            }
        }
    }

    printf("\n");
    return 0;
}