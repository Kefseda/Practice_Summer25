#include "Matrix.h"

/* Автор: Дорожков И.А.
 * Задача 339д
 * Дана действительная квадратная матрица порядка n. Найти наибольшее из 
 * значений элементов, расположенных в заштрихованной части матрицыm (ниже глав диагонали)
 */

//Метод для получения наибольшего элемента
int GetMaxFromMatrix(float** matrix, int size) {
	int max = matrix[0][0];

	//ищем наибольшее из заштрихованной части
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++) {
			if (max < matrix[i][j])
				max = matrix[i][j];
		}
	}

	return max;
}

void Start692b() {
	int n;
	float** matrix;

	printf("Введите n ");
	scanf_s("%d", &n);

	matrix = InitMatrix(n);

	FillMatrix(matrix,n);
	PrintMatrix(matrix,n);

	float max = GetMaxFromMatrix(matrix, n);

	printf("наибольшее из значений элементов: %.0f ", max);

	FreeMatrix(matrix, n);
}