#pragma once

#include <iostream>

using namespace std;

int* inputArray(int size) {
    if (size <= 0) {
        return nullptr;
    }

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }
    return arr;
}

void printArray(const int* arr, int size) {
    if (size == 0) {
        cout << "Массив пуст";
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
