#include "Matrix.h"

/* �����: �������� �.�.
 * ������ 701�
 * ���� ���������� ������� A ������� n � ������ b � n ��������� 
 * ����� �������� ������: Ab.
 */

//����� ��� ������������� �������
float* InitArr(int size) {
	//calloc - �� ��, ��� � malloc, �� ����������� ����
	float* arr = calloc(size, sizeof(float));
	return arr;
}

//����� ��� ���������� �������
void FillArr(float* arr, int size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Start701a() {
	int n;
	float* b;
	float* result;
	float** matrix;

	printf("������� n ");
	scanf_s("%d", &n);

	matrix = InitMatrix(n);
	FillMatrix(matrix, n);
	PrintMatrix(matrix, n);

	b = InitArr(n);
	FillArr(b, n);
	printf("\n������ %d:\n", n);
	PrintArr(b, n);
	printf("\n");

	result = InitArr(n);
	for (int i = 0;i < n;i++) {
		float sum = 0;

		for (int j = 0;j < n;j++) {
			sum += matrix[i][j] * b[j];
		}

		result[i] = sum;
	}

	printf("���������: \n");
	printf("������ %d:\n", n);
	PrintArr(result,n);

	free(b);
	free(result);
	FreeMatrix(matrix, n);
}