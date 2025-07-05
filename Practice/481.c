#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Автор: Дорожков И.А.
 * Задача 481
 * Дан файл f, компоненты u0,u1..un которого являются последовательными числами Фибоначи
 * Получить файл, заполненный числами Фибоначи
 */

void Start481() {

	char* path = "C:/Users/Ivan/Desktop/test.txt";
	FILE* fp;
	int* u;				//НУЖНО ОТКАЗАТЬСЯ ОТ МАССИВА
	int n;

	printf("Введите n ");
	scanf_s("%d", &n);

	//заполняем массив числами Фибоначи
	u = (int*)calloc(n, sizeof(int));
	printf("числа Фибоначи\n");
	for (int i = 0;i < n;i++) {
		if (i < 2)  u[i] = 1;
		else u[i] = u[i - 2] + u[i - 1];

		printf("a[%d] = %d, ", i, u[i]);
	}

	//открываем файл для записи
	fopen_s(&fp, path, "w");
	if (fp == NULL) {
		puts("Файл нельзя открыть");
		exit(1);
	}
	else {
		for (int i = 0; i < n; ++i) {
			fprintf(fp, "%d, ", u[i]);
		}

		fclose(fp);
		puts("Файл перезаписан");
	}
}