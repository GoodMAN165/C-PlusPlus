#pragma once

#include <iostream>

using namespace std;

enum GearboxType { Manual, Automatic };

struct Car {
    double length;          // м
    double clearance;       // мм
    double engineVolume;    // л
    int enginePower;        // л.с.
    double wheelDiameter;   // дюймы
    string color;
    GearboxType gearbox;
};

void createCar(Car& car, double len, double clr, double vol, int power, double wheel, string col, GearboxType gb) {
    car.length = len;
    car.clearance = clr;
    car.engineVolume = vol;
    car.enginePower = power;
    car.wheelDiameter = wheel;
    car.color = col;
    car.gearbox = gb;
}

void showCar(Car car) {
    cout << "Длина: " << car.length << " м" << endl;
    cout << "Клиренс: " << car.clearance << " мм" << endl;
    cout << "Объем двигателя: " << car.engineVolume << " л" << endl;
    cout << "Мощность: " << car.enginePower << " л.с." << endl;
    cout << "Диаметр колес: " << car.wheelDiameter << " дюймов" << endl;
    cout << "Цвет: " << car.color << endl;
    cout << "Коробка передач: " << (car.gearbox == Manual ? "Механика" : "Автомат") << endl;
}

void searchByColor(Car cars[], int size, string color) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (cars[i].color == color) {
            cout << "Найден автомобиль цвета " << color << ":" << endl;
            showCar(cars[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "Автомобилей цвета " << color << " не найдено." << endl;
    }
}


