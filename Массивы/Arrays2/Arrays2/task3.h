#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

bool containsElement(const int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

//объединения двух массивов (без повторений)
int* unionArrays(const int* A, int M, const int* B, int N, int& resultSize) {
    int* uniqueElements = new int[M + N];
    int count = 0;

    for (int i = 0; i < M; i++) {
        if (!containsElement(uniqueElements, count, A[i])) {
            uniqueElements[count] = A[i];
            count++;
        }
    }

    for (int i = 0; i < N; i++) {
        if (!containsElement(uniqueElements, count, B[i])) {
            uniqueElements[count] = B[i];
            count++;
        }
    }

    int* result = new int[count];
    for (int i = 0; i < count; i++) {
        result[i] = uniqueElements[i];
    }

    resultSize = count;
    delete[] uniqueElements;

    return result;
}
