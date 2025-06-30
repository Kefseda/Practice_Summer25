#include <math.h>			// Подключение библиотеки для работы с математикой

/* Автор: Дорожков И.А.
 * Задача 88в
 * Дано натуральное число n.
 * Нужно переставить первую и последнюю цифру числа n.
 */

void Start88v() {
	int n;
	int foot = 0, head = 0;
	int result = 0;
	int size = 0;

	printf("Дано натуральное число n.\n");
	printf("Нужно переставить первую и последнюю цифру числа n.\n");

	printf("Введите n ");
	scanf_s("%d", &n);

	//запоминаем последнюю цифру
	foot = n % 10;

	//перебираем число для нахождения первой цифры
	for (int i = 1; i < n; i *= 10) {
		head = n / i;
		size++;
	}

	int temp = n;

	for (int i = 10; i < n; i *= 10) {
		result += temp % 10 * i;
		temp = temp / 10;
	}

	result += head;
	result += foot * pow(10, size);

	printf("Custom copied string: %d\n", result);
}