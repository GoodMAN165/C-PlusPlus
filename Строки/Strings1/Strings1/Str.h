#pragma once

#include <iostream>
#include <string>

using namespace std;

// Задание 1
void removeCharAt(string& str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
}

// Задание 2
void removeAllChars(string& str, char ch) {
    for (size_t i = 0; i < str.length(); ) {
        if (str[i] == ch) {
            str.erase(i, 1);
        }
        else {
            i++;
        }
    }
}

// Задание 3
void insertCharAt(string& str, int index, char ch) {
    if (index >= 0 && index <= str.length()) {
        str.insert(index, 1, ch);
    }
}

// Задание 4
void replaceDotsWithExclamation(string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

// Задание 5
int countCharOccurrences(const string& str, char target) {
    int count = 0;
    for (char ch : str) {
        if (ch == target) count++;
    }
    return count;
}

// Задание 6
void countCharacters(const string& str, int& letters, int& digits, int& others) {
    letters = digits = others = 0;
    for (char ch : str) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            letters++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
}