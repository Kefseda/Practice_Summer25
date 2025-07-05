#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* �����: �������� �.�.
 * ������ 481
 * ��� ���� f, ���������� u0,u1..un �������� �������� ����������������� ������� ��������
 * �������� ����, ����������� ������� ��������
 */

void Start481() {

	char* path = "C:/Users/Ivan/Desktop/test.txt";
	FILE* fp;
	int* u;				//����� ���������� �� �������
	int n;

	printf("������� n ");
	scanf_s("%d", &n);

	//��������� ������ ������� ��������
	u = (int*)calloc(n, sizeof(int));
	printf("����� ��������\n");
	for (int i = 0;i < n;i++) {
		if (i < 2)  u[i] = 1;
		else u[i] = u[i - 2] + u[i - 1];

		printf("a[%d] = %d, ", i, u[i]);
	}

	//��������� ���� ��� ������
	fopen_s(&fp, path, "w");
	if (fp == NULL) {
		puts("���� ������ �������");
		exit(1);
	}
	else {
		for (int i = 0; i < n; ++i) {
			fprintf(fp, "%d, ", u[i]);
		}

		fclose(fp);
		puts("���� �����������");
	}
}