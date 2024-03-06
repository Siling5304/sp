#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

Matrix* createMatrix(int rows, int cols);
void freeMatrix(Matrix* mat);
Matrix* transposeMatrix(Matrix* mat);
Matrix* addMatrix(Matrix* mat1, Matrix* mat2);
Matrix* multiplyMatrix(Matrix* mat1, Matrix* mat2);
void printMatrix(Matrix* mat);

#endif
