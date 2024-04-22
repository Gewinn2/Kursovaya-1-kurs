#include <iostream>
#include "function.h"
#include <cctype>
using namespace std;

// ������� �������
void clearConsole() {
    system("cls");
}

// ����������� ����
void menu() {

    int choice;
    while (true) {
        cout << " --------------------------------" << endl;
        cout << "|              ����              |" << endl;
        cout << " --------------------------------" << endl << endl;
        cout << "1. ������� ����������� ���������" << endl;
        cout << "2. ���� ���������� ���������" << endl;
        cout << "3. ���������� ������" << endl;
        cout << "������� ����� ������: ";
        cin >> choice;

        // ��������� ����� ������������
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            clearConsole();
            cout << "������������ ��������. ������� ����� �����." << endl;
            continue;
        }

        // ����� ������ ���� � ����������� �� ����, ��� ���� ������������
        switch (choice) {
        case 1:
            clearConsole();
            solver(); // ������� ��� ������� ����������� ���������
            clearConsole();
            break;
        case 2:
            clearConsole();
            printType(); // ������� ��� ����������� ����� ���������� ���������
            clearConsole();
            break;
        case 3:
            clearConsole();
            cout << "���������� ������..." << endl;
            return;
        default:
            clearConsole();
            cout << "������ ������ ���� ���. ������� ���������� �����." << endl;
            break;
        }
    }
}