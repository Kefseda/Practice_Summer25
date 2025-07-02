#include <math.h>			// Подключение библиотеки для работы с математикой
#include <stdbool.h>

/* Автор: Дорожков И.А.
 * Задача 339д
 * Даны целые числаa a1,..., an (в этой последовательности могут быть повторяющиеся члены).
 * Выяснить, сколько чисел входит в последовательность более чем по одному разу.
 */

void PrintArr(float* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("a[%d] = %2.2f\n", i, arr[i]);
}

void Start339d() {
    int n, i, j, k = 0;
    float* a;

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

    for (i = 0; i < n; i++)
    {
        bool leftNumUnique = true;
        
        //если слева будет повтор, то проверяем следующее число в массиве
        for (j = 0; j < i; j++) 
        {
            if (a[j] == a[i])
            {
                leftNumUnique = false;
                break;
            }
        }
        
        if (leftNumUnique || i == 0)
        {
            //ищем первую повторку и считаем её
            for (j = i + 1; j < n; j++) 
            {
                if (a[j] == a[i])
                {
                    k++;
                    break;
                }
            }
        }
    }
    
    printf("Числа, которые входят в последовательность более чем по одному разу: %d\n", k);

    free(a);
}