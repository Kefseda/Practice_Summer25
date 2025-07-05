//Даны натуральные числа a, c, m.Получить f(m), где
// f(n) = {n, если 0 <= n <=9;
//			g(n) f(n-1-g(n)) + n, в противном случае}

//g(n) = остаток от деления a n + c на 10.

//Использовать программу, включающую рекурсивную процедуру вычисления f(n).

//функция вычисления g
int g (int a, int c, int n) {
	return a * (n + c) % 10;
}

//функция вычисления f
int f (int a, int c, int n) {
	if (0 <= n <= 9) return n;
	else return g(a, c, n) * f(a, c, n - 1 - g(a, c, n)) + n;
}

void Start457() {
	int a, c, m;

	printf("Введите a ");
	scanf_s("%d", &a);

	printf("Введите c ");
	scanf_s("%d", &c);

	printf("Введите m ");
	scanf_s("%d", &m);

	int result = f(a, c, m);
	
	printf("Результат:%d ", result);
}