#include <iostream>
#include <sstream>

using namespace std;

inline int bit_calculator() {
    setlocale(LC_ALL, "Russian");

    int number;
    cout << "Введите число в десятичной системе: ";
    cin >> number;

    if (cin.fail()) {
        cerr << "Ошибка: Введено некорректное число.\n";
        cin.clear(); // Сброс флага ошибки ввода
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка ввода
        return 1; // Возвращаем ошибку
    }

    cout << number << " в восьмеричной:   " << oct << number << '\n';
    cout << dec << number << " в десятичной: " << dec << number << '\n';
    cout << dec << number << " в шестнадцатеричной: " << hex << number << '\n';

    stringstream ss;
    ss << hex << number;
    string hex_str = ss.str();

    cout << dec << number << " в двоичной:  ";
    for (char c : hex_str) {
        switch (c) {
        case '0': cout << "0000"; break;
        case '1': cout << "0001"; break;
        case '2': cout << "0010"; break;
        case '3': cout << "0011"; break;
        case '4': cout << "0100"; break;
        case '5': cout << "0101"; break;
        case '6': cout << "0110"; break;
        case '7': cout << "0111"; break;
        case '8': cout << "1000"; break;
        case '9': cout << "1001"; break;
        case 'a': case 'A': cout << "1010"; break;
        case 'b': case 'B': cout << "1011"; break;
        case 'c': case 'C': cout << "1100"; break;
        case 'd': case 'D': cout << "1101"; break;
        case 'e': case 'E': cout << "1110"; break;
        case 'f': case 'F': cout << "1111"; break;
        default:
            cerr << "Ошибка: Некорректное значение в шестнадцатеричной системе.\n";
            return 1; // Возвращаем ошибку
        }
    }
    cout << '\n';

    return 0;
}