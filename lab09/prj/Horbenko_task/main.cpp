#include <iostream>
#include <conio.h>
#include "ModulesHorbenko.h"

using namespace std;


int main()
{
    system("chcp 1251 & cls");
    char input;
    float x, y, z;
    int speed;
    float temp1, temp2, temp3, temp4, temp5, temp6;

    while (true) {
        cout << "������ ������ ('z', '�', 's', 't', 'q' ��� 'Q'): ";
        cin >> input;

        switch (input) {
            case 'z':
                cout << "������ �������� x, y �� z ����� �����: ";
                cin >> x >> y >> z;
                cout << "��������� s_calculation: " << s_calculation(x, y, z) << endl;
                break;
            case 'r':
                cout << "������ �������� �������: ";
                cin >> speed;
                cout << tornado_category(speed) << endl;
                break;
            case 's':
                cout << "������ ����� ���������� ����� �����\n00:00, 04:00, 8:00, 12:00, 16:00, 20:00 ���\n ";
                cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6;
                float* result;
                result = calculate_temp(temp1, temp2, temp3, temp4, temp5, temp6);
                cout << "������� ����������� � �������: " << result[0] << endl;
                cout << "������� ����������� � �����������: " << result[1] << endl;
                break;
            case 't':
                unsigned int num;
                cout << "������ ���� �����: ";
                cin >> num;
                cout << "ʳ������ �������� ��� � �������� ������������ �����: " << Bits(num) << endl;
                break;
            case 'q':
            case 'Q':
                cout << "����� � ��������." << endl;
                exit(0);
            default:
                cout << "��������� ��������. ��������� �� ���." << endl;
                cout << '\a';
        }
    }
    getch();
    return 0;
}
