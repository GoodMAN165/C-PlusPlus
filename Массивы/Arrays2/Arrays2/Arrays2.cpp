#include <iostream>

#include "task4.h"
#include "task3.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Задания 3 и 4 \n";

    //ыполнение задания 3
    cout << "\nЗадание 3: Объединение массивов\n";

    int M, N;

    cout << "Введите размер массива A (M): ";
    cin >> M;

    int* A = nullptr;
    if (M > 0) {
        cout << "Введите элементы массива A: \n";
        A = inputArray(M);
    }

    cout << "\nВведите размер массива B (N): ";
    cin >> N;

    int* B = nullptr;
    if (N > 0) {
        cout << "Введите элементы массива B: \n";
        B = inputArray(N);
    }

    if (M > 0 && N > 0) {
        cout << "\nИсходные массивы: \n";
        cout << "Массив A: ";
        printArray(A, M);
        cout << "Массив B: ";
        printArray(B, N);

        int resultSize;
        int* unionResult = unionArrays(A, M, B, N, resultSize);

        cout << "\nОбъединение массивов A и B (без повторений): \n";
        cout << "Результат: ";
        printArray(unionResult, resultSize);
        cout << "Размер результирующего массива: " << resultSize << endl;

        delete[] unionResult;
    }
    else {
        cout << "\nОдин или оба массива пусты. Объединение невозможно \n";
    }

    //освобождение памяти для задания 3
    if (A) delete[] A;
    if (B) delete[] B;

    //выполнение задания 4
    task4();

    cout << "\nПрограмма завершена \n";

    return 0;
}