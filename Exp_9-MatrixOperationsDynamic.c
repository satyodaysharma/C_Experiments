#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int n) {
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    return matrix;
}

void inputMatrix(int n, int** matrix, const char* name) {
    printf("Enter elements of the %s matrix:\n", name);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int n, int** mat1, int** mat2, int** result) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int n, int** mat1, int** mat2, int** result) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int n, int** matrix, const char* message) {
    printf("\n%s:\n", message);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void freeMatrix(int n, int** matrix) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int n;

    printf("Enter the order (n x n) of the matrices: ");
    scanf("%d", &n);

    int** mat1 = allocateMatrix(n);
    int** mat2 = allocateMatrix(n);
    int** sum = allocateMatrix(n);
    int** product = allocateMatrix(n);

    inputMatrix(n, mat1, "first");
    inputMatrix(n, mat2, "second");

    addMatrices(n, mat1, mat2, sum);
    multiplyMatrices(n, mat1, mat2, product);

    printMatrix(n, sum, "Sum of the matrices");
    printMatrix(n, product, "Product of the matrices");

    freeMatrix(n, mat1);
    freeMatrix(n, mat2);
    freeMatrix(n, sum);
    freeMatrix(n, product);

    return 0;
}
