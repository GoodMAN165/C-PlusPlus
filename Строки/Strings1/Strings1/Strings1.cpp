#include <iostream>

#include "Str.h"

using namespace std;

int main() {
    int choice;
    string str;
    char ch;
    int index;

    cout << "Выберите задание (1-6): ";
    cin >> choice;
    cin.ignore(); // очистка буфера

    switch (choice) {
    case 1: {
        cout << "Введите строку: ";
        getline(cin, str);
        cout << "Введите номер символа для удаления (начиная с 0): ";
        cin >> index;
        removeCharAt(str, index);
        cout << "Результат: " << str << endl;
        break;
    }
    case 2: {
        cout << "Введите строку: ";
        getline(cin, str);
        cout << "Введите символ для удаления: ";
        cin >> ch;
        removeAllChars(str, ch);
        cout << "Результат: " << str << endl;
        break;
    }
    case 3: {
        cout << "Введите строку: ";
        getline(cin, str);
        cout << "Введите позицию для вставки (начиная с 0): ";
        cin >> index;
        cout << "Введите символ для вставки: ";
        cin >> ch;
        insertCharAt(str, index, ch);
        cout << "Результат: " << str << endl;
        break;
    }
    case 4: {
        cout << "Введите строку: ";
        getline(cin, str);
        replaceDotsWithExclamation(str);
        cout << "Результат: " << str << endl;
        break;
    }
    case 5: {
        cout << "Введите строку: ";
        getline(cin, str);
        cout << "Введите символ для поиска: ";
        cin >> ch;
        int count = countCharOccurrences(str, ch);
        cout << "Символ '" << ch << "' встречается " << count << " раз(а) \n";
        break;
    }
    case 6: {
        cout << "Введите строку: ";
        getline(cin, str);
        int letters, digits, others;
        countCharacters(str, letters, digits, others);
        cout << "Букв: " << letters << endl;
        cout << "Цифр: " << digits << endl;
        cout << "Прочих символов: " << others << endl;
        break;
    }
    default:
        cout << "Неверный выбор \n";
    }

    return 0;
}