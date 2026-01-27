#include <iostream>

#include "ComplexNum.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    Complex c1 = { 3.0, 4.0 };
    Complex c2 = { 1.0, 2.0 };

    cout << "c1 = "; displayComplex(c1);
    cout << "c2 = "; displayComplex(c2);
    cout << "Сумма: "; displayComplex(add(c1, c2));
    cout << "Разность: "; displayComplex(subtract(c1, c2));
    cout << "Умножение: "; displayComplex(multiply(c1, c2));
    cout << "Деление: "; displayComplex(divide(c1, c2));

    return 0;
}