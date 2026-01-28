#pragma once

#include <iostream>

using namespace std;

// проверки, содержится ли элемент в массиве
bool contains(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

// удаления дубликатов в массиве
int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;

    int index = 0;
    for (int i = 1; i < size; i++) {
        bool found = false;
        for (int j = 0; j <= index; j++) {
            if (arr[j] == arr[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            index++;
            arr[index] = arr[i];
        }
    }
    return index + 1;
}