#include<iostream>
#include"Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    while (true) {
        cout << "1 - Угадай число" << endl;
        cout << "2 - Таймер" << endl;
        cout << "3 - Расписание занятий на заданный день." << endl;
        cout << "4 - Представление десятичного числа в системах исчисления: двоичной, восьмеричной, десятичной, шестнадцатеричной." << endl;
        cout << "5 - Выход из программы." << endl;

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            GuessTheNumber();
            cout << endl;
            break;
        case 2:
            Timer();
            cout << endl;
            break;
        case 3:
            tablelist();
            cout << endl;
            break;
        case 4:
            bit_calculator();
            cout << endl;
            break;
        case 5:
            cout << "Выход из программы." << endl;
            return 0;
        default:
            cout << "Ошибочный ввод" << endl;
            break;
        }
    }

    return 0;
}
