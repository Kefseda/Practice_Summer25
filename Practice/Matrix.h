#pragma once

//Метод для инициализации матрицы
float** InitMatrix(int size);

//Метод для заполнения матрицы
void FillMatrix(float** matrix, int size);

//Метод для вывода матрицы
void PrintMatrix(float** matrix, int size);

//Метод для освобождения памяти
void FreeMatrix(float** matrix, int size);