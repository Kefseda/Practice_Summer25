#include "Matrix.h"

/* �����: �������� �.�.
 * ������ 339�
 * ���� �������������� ���������� ������� ������� n. ����� ���������� �� 
 * �������� ���������, ������������� � �������������� ����� �������m (���� ���� ���������)
 */

//����� ��� ��������� ����������� ��������
int GetMaxFromMatrix(float** matrix, int size) {
	int max = matrix[0][0];

	//���� ���������� �� �������������� �����
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++) {
			if (max < matrix[i][j])
				max = matrix[i][j];
		}
	}

	return max;
}

void Start692b() {
	int n;
	float** matrix;

	printf("������� n ");
	scanf_s("%d", &n);

	matrix = InitMatrix(n);

	FillMatrix(matrix,n);
	PrintMatrix(matrix,n);

	float max = GetMaxFromMatrix(matrix, n);

	printf("���������� �� �������� ���������: %.0f ", max);

	FreeMatrix(matrix, n);
}