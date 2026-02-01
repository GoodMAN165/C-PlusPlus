#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

int** addRowToBeginning(int** matrix, int& rows, int cols, int* newRow) {
    int** newMatrix = new int* [rows + 1];

    // Добавление новой строки в начало
    newMatrix[0] = new int[cols];
    copy(newRow, newRow + cols, newMatrix[0]);

    for (int i = 0; i < rows; i++) {
        newMatrix[i + 1] = new int[cols];
        copy(matrix[i], matrix[i] + cols, newMatrix[i + 1]);
    }

    rows++;

    // Удаление старого массива
    for (int i = 0; i < rows - 1; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return newMatrix;
}
