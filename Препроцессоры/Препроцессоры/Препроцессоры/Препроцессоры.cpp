#include <iostream>
#include <cmath>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define POWER(x, n) (pow(a, b))
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

int main() {
    setlocale(LC_ALL, "RU");
    int a = 5, b = 3;

    cout << "Минимум (" << a << ", " << b << ") = " << MIN(a, b) << endl;
    cout << "Максимум (" << a << ", " << b << ") = " << MAX(a, b) << endl;
    cout << "Квадрат (" << a << ") = " << SQUARE(a) << endl;
    cout << "Степень (" << a << ", 2) = " << POWER(a, 2) << endl;
    cout << "Чётность (" << a << ") = " << (IS_EVEN(a) ? "true" : "false") << endl;
    cout << "Не чётность (" << a << ") = " << (IS_ODD(a) ? "true" : "false") << endl;

    return 0;
}