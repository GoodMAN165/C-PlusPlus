#pragma once

#include <iostream>
#include <algorithm>

#include "array_utils.h"

using namespace std;

void task1() {
    int M, N;

    cout << "\n Задание 1 \n";
    cout << "Введите размер массива A: ";
    cin >> M;
    cout << "Введите размер массива B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Введите элементы массива A (" << M << " чисел): ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B (" << N << " чисел): ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    M = removeDuplicates(A, M);
    N = removeDuplicates(B, N);

    int* temp = new int[M];
    int tempSize = 0;

    for (int i = 0; i < M; i++) {
        if (!contains(B, N, A[i])) {
            temp[tempSize] = A[i];
            tempSize++;
        }
    }

    int* C = new int[tempSize];
    for (int i = 0; i < tempSize; i++) {
        C[i] = temp[i];
    }

    // вывод результатов
    cout << "Массив C (элементы A, которых нет в B): ";
    if (tempSize == 0) {
        cout << "массив пуст";
    }
    else {
        for (int i = 0; i < tempSize; i++) {
            cout << C[i] << " ";
        }
    }
    cout << endl;

    // освобождение памяти
    delete[] A;
    delete[] B;
    delete[] C;
    delete[] temp;
}