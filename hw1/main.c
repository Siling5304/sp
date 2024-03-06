#include <stdio.h>
#include "matrix.h"

int main() {
    Matrix* mat1 = createMatrix(2, 2);
    mat1->data[0][0] = 1;
    mat1->data[0][1] = 2;
    mat1->data[1][0] = 3;
    mat1->data[1][1] = 4;

    Matrix* mat2 = createMatrix(2, 2);
    mat2->data[0][0] = 5;
    mat2->data[0][1] = 6;
    mat2->data[1][0] = 7;
    mat2->data[1][1] = 8;

    printf("Matrix 1:\n");
    printMatrix(mat1);

    printf("Matrix 2:\n");
    printMatrix(mat2);

    Matrix* result_transpose1 = transposeMatrix(mat1);
    Matrix* result_transpose2 = transposeMatrix(mat2);
    printf("Transpose of matrix 1:\n");
    printMatrix(result_transpose1);
    freeMatrix(result_transpose1);
    printf("Transpose of matrix 2:\n");
    printMatrix(result_transpose2);
    freeMatrix(result_transpose2);

    Matrix* result_add = addMatrix(mat1, mat2);
    if (result_add != NULL) {
        printf("Result of matrix addition:\n");
        printMatrix(result_add);
        freeMatrix(result_add);
    }

    Matrix* result_multiply = multiplyMatrix(mat1, mat2);
    if (result_multiply != NULL) {
        printf("Result of matrix multiplication:\n");
        printMatrix(result_multiply);
        freeMatrix(result_multiply);
    }

    freeMatrix(mat1);
    freeMatrix(mat2);

    return 0;
}
