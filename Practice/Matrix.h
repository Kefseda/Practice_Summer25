#pragma once

//����� ��� ������������� �������
float** InitMatrix(int size);

//����� ��� ���������� �������
void FillMatrix(float** matrix, int size);

//����� ��� ������ �������
void PrintMatrix(float** matrix, int size);

//����� ��� ������������ ������
void FreeMatrix(float** matrix, int size);