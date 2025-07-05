#pragma once

/**
 * инициализация матрицы
 * @param {int} size - размер матрицы
 * @returns {float**} новая матрица
 * @throws {Error} Если передан неверный формат даты
 */
float** InitMatrix(int size);

/**
 * заполнение матрицы случайными числами
 * @param {float**} matrix - сама матрица
 * @param {int} size - размер матрицы
 */
void FillMatrix(float** matrix, int size);

/**
 * вывод матрицы в консоль
 * @param {float**} matrix - сама матрица
 * @param {int} size - размер матрицы
 */
void PrintMatrix(float** matrix, int size);

/**
 * освобождение памяти от матрицы
 * @param {float**} matrix - сама матрица
 * @param {int} size - размер матрицы
 */
void FreeMatrix(float** matrix, int size);