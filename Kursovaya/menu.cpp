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
        cout << "����" << endl;
        cout << "1. ������� ����������� ���������" << endl;
        cout << "2. ���� ���������� ���������" << endl;
        cout << "3. ���������� ������" << endl;
        cout << "������� ����� ������: ";
        cin >> choice;

        if (isalpha(choice)) {
            cout << "�� ������ ������ ����� �����!" << endl;
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
            cout << "���������� ������..." << endl;
        default:
            clearConsole();
            cout << "������ ������ ���� ���. ������� ���������� �����." << endl;
            break;
        }
    }
}