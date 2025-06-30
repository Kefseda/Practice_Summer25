#include <math.h>			// ����������� ���������� ��� ������ � �����������
#include <stdbool.h>

/* �����: �������� �.�.
 * ������ 339�
 * ���� ����� �����a a1,..., an (� ���� ������������������ ����� ���� ������������� �����).
 * ��������, ������� ����� ������ � ������������������ ����� ��� �� ������ ����.
 */

// ������� ��� ���������� ������ �������� � �����
// �� �������, ��� ������ ������� ����� ����������� � ��������� ����������
float* AddToArr(float* arr, int size, float element) {

    arr = realloc(arr, (size + 1) * sizeof(int));

    if (!arr) {
        printf("����");
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

    printf("���� ����� �����a a1,..., an\n");
    printf("��������, ������� ����� ������ � ������������������ ����� ��� �� ������ ����\n");

    printf("������� n ");
    scanf_s("%d", &n);

    a = malloc(n * sizeof(float));

    if (!a) {
        printf("����");
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
            //���� �� ������� �� ��� ������ ����� ������������������
            if (i != j && a[i] == a[j]) {
                if (sizeOfUnique == 0) {
                    unique[sizeOfUnique] = a[i];
                    sizeOfUnique++;
                    continue;
                }

                //���� � ������� ����������
                for (k = 0;k < sizeOfUnique;k++) {
                    //���� ����� ����������, �� ��� ������
                    //���� ���, �� ����������
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
                printf("����������: %d \n", res);
                break;
            }
        }
    }
*/

    //printf("%d\n", 2);

    free(a);
}