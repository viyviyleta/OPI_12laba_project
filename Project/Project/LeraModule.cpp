#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double num = 100, k = 1;
    srand(time(0));
    int my = rand() % 100 + 1;

    cout << "Здравствуйте! Вы играете в игру отгадай число. Число от 0 до 100\n";
    cout << "Угадайте число - введите цифру\n";

    while (num != my && num != 0) {// Начало цикла, который выполняется, пока num не равно загаданному числу и не равно 0
        cin >> num;

        if (num == my) {
            cout << "Вы выиграли!\nВы отгадали число за " << k << " попыток\n";
        }
        else {
            if (num > my)
                cout << "Ваше число больше загаданного\n";
            if (num < my)
                cout << "Ваше число меньше загаданного\n";
            k++;
        }

        if (num == 0)
            cout << "До свидания\n";
    }

    system("pause");
    return 0;
}