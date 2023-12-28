#include <iostream>
#include <windows.h>
#include <stdlib.h>
#pragma comment(lib, "winmm.lib")

inline int Timer() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int hours, min, sec;
    cout << "Введите количество часов, минут и секунд через пробел: ";
    cin >> hours >> min >> sec;

    for (int h = hours; h >= 0; h--) {
        for (int m = min; m >= 0; m--) {
            for (int s = sec; s >= 0; s--) {
                if (h >= 10) {
                    cout << h << ":";
                }
                else {
                    cout << "0" << h << ":";
                }

                if (m >= 10) {
                    cout << m << ":";
                }
                else {
                    cout << "0" << m << ":";
                }

                if (s >= 10) {
                    cout << s << endl;
                }
                else {
                    cout << "0" << s << endl;
                }

                Sleep(1000);
                system("cls");
            }
            sec = 59;
        }
        min = 59;
    }

    cout << "Таймер сработал!" << endl;

    PlaySound(TEXT("C:\\Users\\viy.viy.leta\\Desktop\\OPI\\OPI_12laba_project\\OPI_12laba_project\\Project1\\Project1\\signal.wav"), NULL, SND_FILENAME);
    return 0;
}