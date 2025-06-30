#include <math.h>			// Подключение библиотеки для работы с математикой
#include <stdbool.h>

/* Автор: Дорожков И.А.
 * Задача 339д
 * Даны целые числаa a1,..., an (в этой последовательности могут быть повторяющиеся члены).
 * Выяснить, сколько чисел входит в последовательность более чем по одному разу.
 */

// Функция для добавления нового элемента в конец
// Не забывай, что размер массива нужно фиксировать в отдельной переменной
float* AddToArr(float* arr, int size, float element) {

    arr = realloc(arr, (size + 1) * sizeof(int));

    if (!arr) {
        printf("ужас");
        exit(1);
    }

    arr[size] = element;
    return arr;
}

void PrintArr(float* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%f\n", arr[i]);
}

void Start339d() {
    int n, i, j, k;
    float* a;
    float* unique;

    printf("Даны целые числаa a1,..., an\n");
    printf("Выяснить, сколько чисел входит в последовательность более чем по одному разу\n");

    printf("Введите n ");
    scanf_s("%d", &n);

    a = malloc(n * sizeof(float));

    if (!a) {
        printf("ужас");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }

    PrintArr(a,n);

    unique = malloc(n * sizeof(float));
    int sizeOfUnique = 0;

    for (i = 0; i < n; i++) {

        for (j = 0;j < n;j++) {
            //если мы смотрим на два разных члена последовательности
            if (i != j && a[i] == a[j]) {
                if (sizeOfUnique == 0) {
                    unique[sizeOfUnique] = a[i];
                    sizeOfUnique++;
                    continue;
                }

                //ищем в массиве совпадения
                for (k = 0;k < sizeOfUnique;k++) {
                    //если число попадалось, то идём дальше
                    //если нет, то запоминаем
                    if (a[i] == unique[k]) break;
                    else {
                        //AddToArr(unique, sizeOfUnique, a[i]);
                        unique[sizeOfUnique] = a[i];
                        sizeOfUnique++;
                    }
                }
            }
        }
    }
    printf("\n");

    PrintArr(unique,sizeOfUnique);

    /*
    int res = 0;

    for (i = 0; i < n; i++) {
        int match = 0;
        for (j = 0;j < n;j++) {
            if (a[i] == a[j])match++;

            if (match > 1) {
                res++;
                printf("совпадений: %d \n", res);
                break;
            }
        }
    }
*/

    //printf("%d\n", 2);

    free(a);
}