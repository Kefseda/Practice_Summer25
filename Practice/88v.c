#include <math.h>			// ����������� ���������� ��� ������ � �����������

/* �����: �������� �.�.
 * ������ 88�
 * ���� ����������� ����� n.
 * ����� ����������� ������ � ��������� ����� ����� n.
 */

void Start88v() {
	int n;
	int foot = 0, head = 0;
	int result = 0;
	int size = 0;

	printf("���� ����������� ����� n.\n");
	printf("����� ����������� ������ � ��������� ����� ����� n.\n");

	printf("������� n ");
	scanf_s("%d", &n);

	//���������� ��������� �����
	foot = n % 10;

	//���������� ����� ��� ���������� ������ �����
	for (int i = 1; i < n; i *= 10) {
		head = n / i;
		size++;
	}

	int temp = n;

	for (int i = 10; i < n; i *= 10) {
		result += temp % 10 * i;
		temp = temp / 10;
	}

	result += head;
	result += foot * pow(10, size);

	printf("Custom copied string: %d\n", result);
}