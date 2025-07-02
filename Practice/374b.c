#include <math.h>

/* �����: �������� �.�.
 * ������ 374�
 * ���� ����������� ����� n. ��������, ������� ������������� 
 * ��������� �������� ������� [aij] i, j = 1, ..., n, ���� aij = cos(i^2 + n)
 */

void Start374b() {
	int n;
	float** a;

	printf("������� n ");
	scanf_s("%d", &n);

	//������������� �������
	a = malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		a[i] = malloc(n * sizeof(float));
	}

	//���������� �������
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = cosf(powf((i + 1),2) + n);
		}
	}

	//����� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%.2f ", a[i][j]);
		}
		printf("\n");
	}

	//������������ �������
	for (int i = 0; i < n; i++) {
		free(a[i]);
	}
	free(a);
}