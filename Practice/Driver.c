#include <stdio.h>			// Подключение библиотеки для ввода и вывода
#include <locale.h>			// Подключение библиотеки для работы с локализацией

/* Автор: Дорожков И.А.
 * Файл для выбора и запуска задач
 */

/// Главная функция программы
int main() {
	// Настройка локализации программы
	setlocale(LC_ALL, "");

	//номер выбранной задачи
	int choosed;

	printf("Введите номер задачи ");

	//ввод дробей через ','
	scanf_s("%d", &choosed);

	//конструкция сравнения выражений
	switch (choosed){
	case 1:
		Start11b();
		break;
	case 2:
		Start58b();
		break;
	case 3:
		Start72a();
		break;
	case 4:
		Start88v();
		break;
	case 5:
		Start186();
		break;
	case 6:
		Start339d();
		break;
	case 7:
		Start269b();
		break;
	case 8:
		Start374b();
		break;
	case 9:
		Start701a();
		break;
	case 10:
		Start457();
		break;
	case 11:
		Start692b();
		break;
	default:
		printf("Такой задачи нету\n");
		break;
	}

	// Код возврата для ОС, принято что код возврата 0 означает, что программа завершилась без ошибок.
	return 0;
}