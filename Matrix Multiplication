#include <stdio.h>

int main() {
    int i, j, k, rows1, columns1, rows2, columns2;
    int matrix1[10][10], matrix2[10][10], product[10][10];

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    // input first matrix elements
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    // input second matrix elements
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // check if matrices can be multiplied
    if(columns1 != rows2) {
        printf("Matrices cannot be multiplied.");
        return 0;
    }

    // multiply matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < columns2; j++) {
            product[i][j] = 0;
            for(k = 0; k < rows2; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print product of matrices
    printf("\nProduct of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < columns2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
