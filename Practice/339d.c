#include <math.h>			// Подключение библиотеки для работы с математикой
#include <stdbool.h>

/* Автор: Дорожков И.А.
 * Задача 339д
 * Даны целые числаa a1,..., an (в этой последовательности могут быть повторяющиеся члены).
 * Выяснить, сколько чисел входит в последовательность более чем по одному разу.
 */

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
        printf("");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }

    PrintArr(a,n);

    int res = 0;

    for (i = 0; i < n; i++) {
        int match = n;
        for (j = 0;j < n;j++) {
            if (a[i] != a[j])match--;

            if (match == 1) {
                res++;
                printf("совпадений: %f \n", a[i]);
                break;
            }
            else
        }
    }

    //printf("%d\n", 2);

    free(a);
}