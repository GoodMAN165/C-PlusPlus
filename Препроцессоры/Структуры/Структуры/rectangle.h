#pragma once

#include <iostream>

using namespace std;

struct Rectangle {
    double x, y;
    double width, height;
};

void moveRectangle(Rectangle& rect, double dx, double dy) {
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, double dw, double dh) {
    rect.width += dw;
    rect.height += dh;
}

void printRectangle(const Rectangle& rect) {
    cout << "Rectangle: (" << rect.x << ", " << rect.y << "), "
        << "width = " << rect.width << ", height = " << rect.height << endl;
}