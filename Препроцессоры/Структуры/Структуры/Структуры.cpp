#include <iostream>

#include "rectangle.h"
#include "Point.h"
#include "fraction.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // Прямоугольник
    Rectangle rect = { 0, 0, 10, 5 };
    printRectangle(rect);
    moveRectangle(rect, 2, 3);
    printRectangle(rect);
    resizeRectangle(rect, 5, 5);
    printRectangle(rect);

    // Расстояние между точками
    Point p1 = { 0, 0 };
    Point p2 = { 3, 4 };
    cout << "Distance: " << distanceBetweenPoints(p1, p2) << endl;
    
    // Простая дробь
    Fraction f1 = { 1, 2 };
    Fraction f2 = { 3, 4 };

    cout << "f1 = "; printFraction(f1); cout << endl;
    cout << "f2 = "; printFraction(f2); cout << endl;

    Fraction sum = add(f1, f2);
    cout << "Sum: "; printFraction(sum); cout << endl;

    Fraction diff = subtract(f1, f2);
    cout << "Difference: "; printFraction(diff); cout << endl;

    Fraction prod = multiply(f1, f2);
    cout << "Product: "; printFraction(prod); cout << endl;

    Fraction quot = divide(f1, f2);
    cout << "Quotient: "; printFraction(quot); cout << endl;

    return 0;
}