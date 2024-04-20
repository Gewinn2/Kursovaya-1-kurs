#include <iostream>
#include "header.h"
#include <cctype>
using namespace std;

void clearConsole() {
    system("cls");
}

void menu() {

    int choice;
    while (true) {
        cout << "МЕНЮ" << endl;
        cout << "1. Решение квадратного уравнения" << endl;
        cout << "2. Типы квадратных уравнений" << endl;
        cout << "3. Завершение работы" << endl;
        cout << "Введите номер пункта: ";
        cin >> choice;

        if (isalpha(choice)) {
            cout << "Вы должны ввести целое число!" << endl;
            continue;
        }

        switch (choice) {
        case 1:
            clearConsole();
            cout << "1" << endl;
            break;
        case 2:
            clearConsole();
            cout << "2" << endl;
            break;
        case 3:
            clearConsole();
            cout << "Завершение работы..." << endl;
        default:
            clearConsole();
            cout << "Такого пункта меню нет. Введите корректный номер." << endl;
            break;
        }
    }
}