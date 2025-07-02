#include "Matrix.h"

/* Автор: Дорожков И.А.
 * Задача 701а
 * Даны квадратная матрица A порядка n и вектор b с n элеметами 
 * Нужно получить вектор: Ab.
 */

//Метод для инициализации массива
float* InitArr(int size) {
	//calloc - то же, что и malloc, но присваивает ноль
	float* arr = calloc(size, sizeof(float));
	return arr;
}

//Метод для заполнения массива
void FillArr(float* arr, int size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Start701a() {
	int n;
	float* b;
	float* result;
	float** matrix;

	printf("Введите n ");
	scanf_s("%d", &n);

	matrix = InitMatrix(n);
	FillMatrix(matrix, n);
	PrintMatrix(matrix, n);

	b = InitArr(n);
	FillArr(b, n);
	printf("\nВектор %d:\n", n);
	PrintArr(b, n);
	printf("\n");

	result = InitArr(n);
	for (int i = 0;i < n;i++) {
		float sum = 0;

		for (int j = 0;j < n;j++) {
			sum += matrix[i][j] * b[j];
		}

		result[i] = sum;
	}

	printf("Результат: \n");
	printf("Вектор %d:\n", n);
	PrintArr(result,n);

	free(b);
	free(result);
	FreeMatrix(matrix, n);
}