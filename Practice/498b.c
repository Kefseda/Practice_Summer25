
#include <stdio.h>

/* Автор: Дорожков И.А.
 * Задача 481
 * Дан символьный файл f. Найти самое длинное слово
 * среди слов, вторая буква которых есть e; если слов с наибольшей
 * длинной несколько, то найти последнее. Если таких слов нет вообще,
 * то сообщить об этом. Решить эту задачу:
 * без ограничения на чило символов в слове.
 */

void Start498b() {
	char* path = "C:/Users/Ivan/Desktop/haha.txt";
	char buffer[256];
	FILE* fp;
	char* p1;
	char* p2 = NULL;

	//открываем файл для чтения
	fopen_s(&fp, path, "r");
	if (fp == NULL) {
		puts("Файл нельзя открыть");
		exit(1);
	}

	printf("ищем самое длинное слово со второй буквой е в тексте:\n");
	// пока не дойдем до конца, считываем по 256 байт
	while ((fgets(buffer, 256, fp)) != NULL)
	{
		printf("%s", buffer);
	}

	int maxLen = 0, len;
	//strtok - разбивает строку на отдельные части
	p1 = strtok(buffer, " ");
	while (p1 != NULL) {
		//strlen - длинна строки
		len = strlen(p1);
		if (maxLen <= len && p1[1] == 'e') {
			//strdup - создаёт копию указанной нуль-терминированной строки в куче (используя malloc) и возвращает указатель на неё
			p2 = strdup(p1);
			maxLen = len;
		}
		p1 = strtok(NULL, " ");
	}

	if(p2 == NULL) printf("\nТаких слов нет вообще");
	else printf("\nОтвет: '%s'", p2);

	free(p2);

	fclose(fp);

}