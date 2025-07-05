#pragma once

/**
 * ������������� �������
 * @param {int} size - ������ �������
 * @returns {float**} ����� �������
 * @throws {Error} ���� ������� �������� ������ ����
 */
float** InitMatrix(int size);

/**
 * ���������� ������� ���������� �������
 * @param {float**} matrix - ���� �������
 * @param {int} size - ������ �������
 */
void FillMatrix(float** matrix, int size);

/**
 * ����� ������� � �������
 * @param {float**} matrix - ���� �������
 * @param {int} size - ������ �������
 */
void PrintMatrix(float** matrix, int size);

/**
 * ������������ ������ �� �������
 * @param {float**} matrix - ���� �������
 * @param {int} size - ������ �������
 */
void FreeMatrix(float** matrix, int size);