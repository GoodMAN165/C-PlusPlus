#include <iostream>

#include "arrays_utils.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"

using namespace std;

int main() {
    // Создание исходного массива 3x4
    int rows = 3, cols = 4;
    int** matrix = new int* [rows];

    // Заполнение массив значениями
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = counter++;
        }
    }

    cout << "Исходный массив:" << endl;
    printMatrix(matrix, rows, cols);

    // Задание 1
    int newRow1[] = { 13, 14, 15, 16 };
    matrix = addRowToEnd(matrix, rows, cols, newRow1);
    cout << "\nПосле добавления строки в конец:" << endl;
    printMatrix(matrix, rows, cols);

    // Задание 2
    int newRow2[] = { 0, 0, 0, 0 };
    matrix = addRowToBeginning(matrix, rows, cols, newRow2);
    cout << "\nПосле добавления строки в начало:" << endl;
    printMatrix(matrix, rows, cols);

    // Задание 3
    int newRow3[] = { 100, 101, 102, 103 };
    matrix = addRowAtPosition(matrix, rows, cols, newRow3, 2);
    cout << "\nПосле добавления строки в позицию 2:" << endl;
    printMatrix(matrix, rows, cols);

    // Задание 4
    matrix = deleteRowAtPosition(matrix, rows, cols, 3);
    cout << "\nПосле удаления строки в позиции 3:" << endl;
    printMatrix(matrix, rows, cols);

    // Освобождение памяти
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}