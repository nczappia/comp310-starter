#include <stdio.h>

void printMatrix(int matrix[2][2], int rows, int columns)
{
    printf("*Printing Matrix*\n");
    for(int i=0; i<rows; ++i){
	for(int j=0; j<columns; ++j){
	    printf("%d\t", matrix[i][j]);
	}
	printf("\n");
    }
}

void addMatricies(int matrix1[2][2], int matrix2[2][2], int sum[2][2],  int rows, int columns)
{
    for(int i=0; i<rows; ++i){
	for(int j=0; j<columns; ++j){
	    sum[i][j] = matrix1[i][j] + matrix2[i][j];
	}
    }
}

void multiplyMatricies(int matrix1[2][2], int matrix2[2][2], int product[2][2], int matrix1_rows, int matrix1_columns, int matrix2_rows, int matrix2_columns)
{
    for(int i=0; i<matrix1_rows; ++i){
	for(int j=0; j<matrix2_columns; ++j){
	    for(int k=0; k<matrix2_rows; ++k){
		product[i][j] += matrix1[i][k] * matrix2[k][j];
		printf("Row: %d\tColumn: %d\tMatrix1: %d\tMatrix2: %d\tProduct: %d\tStep: %d\t\n", i, j, matrix1[i][k], matrix2[k][j], product[i][j], k);
	    }
	}
    }
}

int main()
{
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{5,6},{7,8}};

    int matrix1_rows = 2, matrix1_columns = 2, matrix2_rows = 2, matrix2_columns = 2;
    
    int sum[2][2];
    int product[2][2];
    
    //printMatrix(matrix1, matrix1_rows, matrix1_columns);
    //printMatrix(matrix2, matrix2_rows, matrix2_columns);
    
    //addMatricies(matrix1, matrix2, sum, matrix1_rows, matrix1_columns);
    //printMatrix(sum, matrix1_rows, matrix1_columns);
    
    printMatrix(product, matrix1_columns, matrix2_rows);
    multiplyMatricies(matrix1, matrix2, product, matrix1_rows, matrix1_columns, matrix2_rows, matrix2_columns);
    printMatrix(product, matrix1_columns, matrix2_rows);

    return 0;
}




