#include <iostream>
#include "ModulesHorbenko.h"

using namespace std;

const char* printCopyright()
{
    system("chcp 1251 & cls");
    return "    -----------------------------------------------------\n\
    | Kate Horbenko, CNTU, github.com/Horbenko-Kate      |\n\
    | �������� ��������, ����, github.com/Horbenko-Kate  |\n\
    --------------- � All rights reserved ---------------\n";
}


bool getBoolResult(char a, char b)
{
    cout << boolalpha;
    return (a + 1 > abs(b - 2));
}

int getHexadecimal(int number)
{
    cout << hex;
    return number;
}



int main()
{
    cout << printCopyright() << endl;

    int x, y, z;
    char a, b;

    cout << "������ x: "; cin >> x;
    cout << "������ y: "; cin >> y;
    cout << "������ z: "; cin >> z;
    cout << "������ a: "; cin >> a;
    cout << "������ b: "; cin >> b;

    cout << "\n��������� �������� ������: " << getBoolResult(a, b) << endl;
    cout << "\nx (� ���������): " << x << "\ny (� ���������): " << y << "\nz (� ���������): " << z << endl;
    cout << "\nx (� ��������������): " << getHexadecimal(x) << "\ny (� ��������������): " << getHexadecimal(y) << "\nz (� ��������������): " << getHexadecimal(z) << endl;

    cout << "\nS = " << s_calculation(x, y, z) << endl;

    return 0;
}
