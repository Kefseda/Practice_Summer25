//���� ����������� ����� a, c, m.�������� f(m), ���
// f(n) = {n, ���� 0 <= n <=9;
//			g(n) f(n-1-g(n)) + n, � ��������� ������}

//g(n) = ������� �� ������� a n + c �� 10.

//������������ ���������, ���������� ����������� ��������� ���������� f(n).

//������� ���������� g
int g (int a, int c, int n) {
	return a * (n + c) % 10;
}

//������� ���������� f
int f (int a, int c, int n) {
	if (0 <= n <= 9) return n;
	else return g(a, c, n) * f(a, c, n - 1 - g(a, c, n)) + n;
}

void Start457() {
	int a, c, m;

	printf("������� a ");
	scanf_s("%d", &a);

	printf("������� c ");
	scanf_s("%d", &c);

	printf("������� m ");
	scanf_s("%d", &m);

	int result = f(a, c, m);
	
	printf("���������:%d ", result);
}