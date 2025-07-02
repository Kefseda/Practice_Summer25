#include <stdio.h>
#include <stdlib.h>

/* Автор: Дорожков И.А.
 * Задача 481
 * Дан файл f, компоненты u0,u1..un которого являются последовательными числами Фибоначи
 * Получить файл, заполненный числами Фибоначи
 */

void Start481() {
	FILE* fp;
	int* u;
	int n;

	printf("Введите n ");
	scanf_s("%d", &n);

	u = (int*)calloc(n, sizeof(int));

	fp = fopen("test.txt", "w");
	if (fp == NULL) {
		puts("Файл нельзя открыть");
		exit(1);
	}
}

