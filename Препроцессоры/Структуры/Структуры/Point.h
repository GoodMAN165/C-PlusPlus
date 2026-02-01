#pragma once

#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

double distanceBetweenPoints(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}