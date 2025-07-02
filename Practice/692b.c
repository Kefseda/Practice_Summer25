/* �����: �������� �.�.
 * ������ 339�
 * ���� �������������� ���������� ������� ������� n. ����� ���������� �� 
 * �������� ���������, ������������� � �������������� ����� �������
 */

//����� ��� ���������� �������
void FillMatrix(float** matrix, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}

//����� ��� ������ �������
void PrintMatrix(float** matrix, int size) {
	
	printf("\n������� %dx%d:\n", size, size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%.0f ", matrix[i][j]);
		}
		printf("\n");
	}
}

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

//����� ��� ������������ ������
void FreeMatrix(float** matrix, int size) {
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}
	free(matrix);
}

void Start692b() {
	int n;
	float** matrix;

	printf("������� n ");
	scanf_s("%d", &n);

	//������������� �������
	matrix = malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		matrix[i] = malloc(n * sizeof(float));
	}

	FillMatrix(matrix,n);
	PrintMatrix(matrix,n);

	float max = GetMaxFromMatrix(matrix, n);

	printf("���������� �� �������� ���������: %.0f ", max);

	FreeMatrix(matrix, n);
}