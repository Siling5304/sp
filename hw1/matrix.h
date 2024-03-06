#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

Matrix* createMatrix(int rows, int cols);
void freeMatrix(Matrix* mat);
void printMatrix(Matrix* mat);
Matrix* addMatrix(Matrix* mat1, Matrix* mat2);
Matrix* transposeMatrix(Matrix* mat);
Matrix* multiplyMatrix(Matrix* mat1, Matrix* mat2);

#endif
