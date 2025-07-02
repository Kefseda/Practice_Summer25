#include <math.h>

/* Автор: Дорожков И.А.
 * Задача 374б
 * Дано натуральное число n. Выяснить, сколько положительных 
 * элементов содержит матрица [aij] i, j = 1, ..., n, если aij = cos(i^2 + n)
 */

void Start374b() {
	int n;
	float** a;

	printf("Введите n ");
	scanf_s("%d", &n);

	//инициализация матрицы
	a = malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		a[i] = malloc(n * sizeof(float));
	}

	//заполнение матрицы
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = cosf(powf((i + 1),2) + n);
		}
	}

	//вывод матрицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%.2f ", a[i][j]);
		}
		printf("\n");
	}

	//освобождение матрицы
	for (int i = 0; i < n; i++) {
		free(a[i]);
	}
	free(a);
}