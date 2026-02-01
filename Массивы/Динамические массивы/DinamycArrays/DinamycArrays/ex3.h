#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

int** addRowAtPosition(int** matrix, int& rows, int cols, int* newRow, int position) {
    if (position < 0 || position > rows) {
        cout << "Некорректная позиция! \n";
        return matrix;
    }

    int** newMatrix = new int* [rows + 1];

    // Копирование строки до позиции
    for (int i = 0; i < position; i++) {
        newMatrix[i] = new int[cols];
        copy(matrix[i], matrix[i] + cols, newMatrix[i]);
    }

    // Добавление новой строки
    newMatrix[position] = new int[cols];
    copy(newRow, newRow + cols, newMatrix[position]);

    // Копирование строки после позиции
    for (int i = position; i < rows; i++) {
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