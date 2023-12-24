#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    while (true) {
        cout << "1 - Угадай число" << endl;
        cout << "2 - Расписание" << endl;
        cout << "3 - Таймер" << endl;
        cout << "4 - Представление числа в системах счисления: двоичной, восьмеричной, десятичной, шестнадцатеричной." << endl;
        cout << "5 - Выход из программы." << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            GuessTheNumber();
            break;
        case 2:
            Timer();
            break;
        case 3:
            tablelist();
            break;
        case 4:
            bit_calculator();
            break;
        case 5:
            cout << "Выход из программы.\n";
            return 0;  // завершение программы
        default:
            cout << "Ошибочный ввод\n";
            break;
        }
    }

    return 0;
}
