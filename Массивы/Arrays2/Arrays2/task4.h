#pragma once

#include <iostream>
#include <algorithm>

#include "task4_utils.h"
#include "arrays_utils.h"

using namespace std;

void task4() {
    int M;
    cout << "\nЗадание 4 \n";
    cout << "Введите размер массива A (M): ";
    cin >> M;

    if (M <= 0) {
        cout << "Неверный размер массива! \n";
        return;
    }

    int* A = new int[M];
    cout << "Введите " << M << " элементов массива A: \n";
    for (int i = 0; i < M; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nИсходный массив A: ";
    printArray(A, M);

    // Меню выбора
    int choice;
    cout << "\nМеню удаления элементов \n";
    cout << "1 - Удалить четные значения \n";
    cout << "2 - Удалить нечетные значения \n";
    cout << "3 - Отмена \n";
    cout << "Выберите действие (1-3): ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        bool removeEven = (choice == 1);

        int newSize;
        int* result = removeElements(A, M, removeEven, newSize);

        cout << "\nРезультат удаления ";
        cout << (removeEven ? "четных" : "нечетных") << " значений: \n";
        cout << "Полученный массив: ";
        printArray(result, newSize);
        cout << "Размер нового массива: " << newSize << endl;

        delete[] result;
    }
    else {
        cout << "Операция отменена \n";
    }

    delete[] A;
}
