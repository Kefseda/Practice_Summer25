#include <math.h>			// ����������� ���������� ��� ������ � �����������
#include <stdbool.h>

/* �����: �������� �.�.
 * ������ 339�
 * ���� ����� �����a a1,..., an (� ���� ������������������ ����� ���� ������������� �����).
 * ��������, ������� ����� ������ � ������������������ ����� ��� �� ������ ����.
 */

void PrintArr(float* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%f\n", arr[i]);
}

void Start339d() {
    int n, i, j, k;
    float* a;
    float* unique;

    printf("���� ����� �����a a1,..., an\n");
    printf("��������, ������� ����� ������ � ������������������ ����� ��� �� ������ ����\n");

    printf("������� n ");
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
                printf("����������: %f \n", a[i]);
                break;
            }
            else
        }
    }

    //printf("%d\n", 2);

    free(a);
}