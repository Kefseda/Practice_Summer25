#include <math.h>			// ����������� ���������� ��� ������ � �����������
#include <stdbool.h>

/* �����: �������� �.�.
 * ������ 339�
 * ���� ����� �����a a1,..., an (� ���� ������������������ ����� ���� ������������� �����).
 * ��������, ������� ����� ������ � ������������������ ����� ��� �� ������ ����.
 */

void PrintArr(float* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("a[%d] = %2.2f\n", i, arr[i]);
}

void Start339d() {
    int n, i, j, k = 0;
    float* a;

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

    for (i = 0; i < n; i++)
    {
        bool leftNumUnique = true;
        
        //���� ����� ����� ������, �� ��������� ��������� ����� � �������
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
            //���� ������ �������� � ������� �
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
    
    printf("�����, ������� ������ � ������������������ ����� ��� �� ������ ����: %d\n", k);

    free(a);
}