/* Автор: Дорожков И.А.
 * Задача 339д
 * Дана действительная квадратная матрица порядка n. Найти наибольшее из 
 * значений элементов, расположенных в заштрихованной части матрицы
 */

//Метод для заполнения матрицы
void FillMatrix(float** matrix, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
}

//Метод для вывода матрицы
void PrintMatrix(float** matrix, int size) {
	
	printf("\nМатрица %dx%d:\n", size, size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%.0f ", matrix[i][j]);
		}
		printf("\n");
	}
}

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

//Метод для освобождения памяти
void FreeMatrix(float** matrix, int size) {
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}
	free(matrix);
}

void Start692b() {
	int n;
	float** matrix;

	printf("Введите n ");
	scanf_s("%d", &n);

	//инициализация матрицы
	matrix = malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		matrix[i] = malloc(n * sizeof(float));
	}

	FillMatrix(matrix,n);
	PrintMatrix(matrix,n);

	float max = GetMaxFromMatrix(matrix, n);

	printf("наибольшее из значений элементов: %.0f ", max);

	FreeMatrix(matrix, n);
}