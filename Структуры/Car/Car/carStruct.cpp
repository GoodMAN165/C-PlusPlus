#include <iostream>
#include <string>

#include "CarCreate.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    Car car1, car2;
    createCar(car1, 4.5, 150, 2.0, 150, 17, "Красный", Manual );
    createCar(car2, 5.0, 160, 3.0, 250, 19, "Синий", Automatic );

    cout << "Автомобиль 1:" << endl;
    showCar(car1);
    cout << endl;

    cout << "Автомобиль 2:" << endl;
    showCar(car2);
    cout << endl;

    Car cars[] = { car1, car2 };
    searchByColor(cars, 2, "Синий");

    return 0;
}