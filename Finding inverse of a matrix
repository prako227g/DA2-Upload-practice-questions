#include <stdio.h>

int main() {
    int i, j, k, n;
    float a[10][10], b[10][10], c[10][10], d;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    // input matrix elements
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // initialize b matrix as identity matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                b[i][j] = 1;
            } else {
                b[i][j] = 0;
            }
        }
    }

    // find inverse of matrix
    for(k = 0; k < n; k++) {
        d = a[k][k];
        for(j = 0; j < n; j++) {
            a[k][j] /= d;
            b[k][j] /= d;
        }
        for(i = 0; i < n; i++) {
            if(i != k) {
                d = a[i][k];
                for(j = 0; j < n; j++) {
                    a[i][j] -= d * a[k][j];
                    b[i][j] -= d * b[k][j];
                }
            }
        }
    }

    // print inverse of matrix
    printf("\nInverse of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%f ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
