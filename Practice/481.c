#include <stdio.h>
#include <stdlib.h>

/* �����: �������� �.�.
 * ������ 481
 * ��� ���� f, ���������� u0,u1..un �������� �������� ����������������� ������� ��������
 * �������� ����, ����������� ������� ��������
 */

void Start481() {
	FILE* fp;
	int* u;
	int n;

	printf("������� n ");
	scanf_s("%d", &n);

	u = (int*)calloc(n, sizeof(int));

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		puts("���� ������ �������");
		exit(1);
	}
}

