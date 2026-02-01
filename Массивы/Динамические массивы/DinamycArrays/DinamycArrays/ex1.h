#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

int** addRowToEnd(int** matrix, int& rows, int cols, int* newRow) {
    int** newMatrix = new int* [rows + 1];

    // Копирование старой строки
    for (int i = 0; i < rows; i++) {
        newMatrix[i] = new int[cols];
        copy(matrix[i], matrix[i] + cols, newMatrix[i]);
    }

    // Добавление новой строки
    newMatrix[rows] = new int[cols];
    copy(newRow, newRow + cols, newMatrix[rows]);

    rows++;

    // Удаление старого массива
    for (int i = 0; i < rows - 1; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return newMatrix;
}