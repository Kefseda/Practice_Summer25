#include <math.h>			// ����������� ���������� ��� ������ � �����������

/* �����: �������� �.�.
 * ������ 58�
 * ���� �������������� ����� a. ��� ������� f(x), ������� ������� 
 * ������������ �� ���.1 (� - �), ��������� f(a).
 */

void Start58b() {
	float a, f;

	printf("���� �������������� ����� a. ��� ������� f(x), ������� �������\n������������ �� ���.1 (� - �), ��������� f(a).\n");

	printf("������ a ");
	scanf_s("%f", &a);

	//�������� ��������
	if (a <= -1) {
		f = -1 / powf(a, 2.0);
	}
	else if (a >= 2) {
		f = 4;
	}
	else {
		f = powf(a, 2.0);
	}

	//����� ����������
	printf("f(a) = %2.2f", f);
}