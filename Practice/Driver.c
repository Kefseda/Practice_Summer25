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
	case 7:
		Start269b();
		break;
	case 8:
		Start374b();
		break;
	case 9:
		Start701a();
		break;
	case 10:
		Start457();
		break;
	case 11:
		Start692b();
		break;
	default:
		printf("����� ������ ����\n");
		break;
	}

	// ��� �������� ��� ��, ������� ��� ��� �������� 0 ��������, ��� ��������� ����������� ��� ������.
	return 0;
}