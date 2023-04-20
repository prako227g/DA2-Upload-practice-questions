#include <stdio.h>

int main() {
    int i, j, rows, columns;
    int matrix[10][10], transpose[10][10];

    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &columns);

    // input matrix elements
    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // find transpose of matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // print original matrix
    printf("\nOriginal matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // print transpose of matrix
    printf("\nTranspose of matrix:\n");
    for(i = 0; i < columns; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
