#include <stdio.h>			// ����������� ���������� ��� ����� � ������
#include <locale.h>			// ����������� ���������� ��� ������ � ������������

/* �����: �������� �.�.
 * ���� ��� ������ � ������� �����
 */

/// ������� ������� ���������
int main() {
	// ��������� ����������� ���������
	setlocale(LC_ALL, "");

	//����� ��������� ������
	int choosed;

	printf("������� ����� ������ ");

	//���� ������ ����� ','
	scanf_s("%d", &choosed);

	//����������� ��������� ���������
	switch (choosed){
	case 1:
		Start11b();
		break;
	case 2:
		Start58b();
		break;
	case 3:
		Start72a();
		break;
	case 4:
		Start88v();
		break;
	case 5:
		Start186();
		break;
	case 6:
		Start339d();
		break;
	case 10:
		Start457();
		break;
	default:
		printf("����� ������ ����\n");
		break;
	}

	// ��� �������� ��� ��, ������� ��� ��� �������� 0 ��������, ��� ��������� ����������� ��� ������.
	return 0;
}