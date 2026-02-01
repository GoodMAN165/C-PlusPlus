#pragma once

#include <iostream>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify(Fraction& f) {
    int g = gcd(abs(f.numerator), abs(f.denominator));
    f.numerator /= g;
    f.denominator /= g;
    if (f.denominator < 0) {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
}

Fraction add(const Fraction& f1, const Fraction& f2) {
    Fraction result = {
        f1.numerator * f2.denominator + f2.numerator * f1.denominator,
        f1.denominator * f2.denominator
    };
    simplify(result);
    return result;
}

Fraction subtract(const Fraction& f1, const Fraction& f2) {
    Fraction result = {
        f1.numerator * f2.denominator - f2.numerator * f1.denominator,
        f1.denominator * f2.denominator
    };
    simplify(result);
    return result;
}

Fraction multiply(const Fraction& f1, const Fraction& f2) {
    Fraction result = {
        f1.numerator * f2.numerator,
        f1.denominator * f2.denominator
    };
    simplify(result);
    return result;
}

Fraction divide(const Fraction& f1, const Fraction& f2) {
    Fraction result = {
        f1.numerator * f2.denominator,
        f1.denominator * f2.numerator
    };
    simplify(result);
    return result;
}

void printFraction(const Fraction& f) {
    cout << f.numerator << "/" << f.denominator;
}
