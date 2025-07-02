#include <stdio.h>
#include <stdlib.h>


//����� ��� ������������� �������
float** InitMatrix(int size) {
	float** matrix = (float**)calloc(size, sizeof(float*));
	for (int i = 0; i < size; i++) {
		matrix[i] = (float*)calloc(size, sizeof(float));
	}

	return matrix;
}

//����� ��� ���������� �������
void FillMatrix(float** matrix, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}

//����� ��� ������ �������
//
void PrintMatrix(float** matrix, int size) {

	printf("\n������� %dx%d:\n", size, size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%2.0f ", matrix[i][j]);
		}
		printf("\n");
	}
}

//����� ��� ������������ ������ �� �������
void FreeMatrix(float** matrix, int size) {
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}
	free(matrix);
}