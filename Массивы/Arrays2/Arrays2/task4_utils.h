#pragma once

#include <iostream>

using namespace std;

//создания нового массива без определенных элементов
int* removeElements(const int* A, int M, bool removeEven, int& newSize) {
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (removeEven) {
            if (A[i] % 2 != 0) {
                count++;
            }
        }
        else {
            if (A[i] % 2 == 0) {
                count++;
            }
        }
    }

    int* result = new int[count];
    int index = 0;

    for (int i = 0; i < M; i++) {
        if (removeEven) {
            if (A[i] % 2 != 0) {
                result[index] = A[i];
                index++;
            }
        }
        else {
            if (A[i] % 2 == 0) {
                result[index] = A[i];
                index++;
            }
        }
    }

    newSize = count;
    return result;
}