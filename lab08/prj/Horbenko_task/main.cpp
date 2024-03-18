#include <iostream>
#include "ModulesHorbenko.h"

using namespace std;

const char* printCopyright()
{
    system("chcp 1251 & cls");
    return "    -----------------------------------------------------\n\
    | Kate Horbenko, CNTU, github.com/Horbenko-Kate      |\n\
    |  атерина √орбенко, ÷Ќ“”, github.com/Horbenko-Kate  |\n\
    --------------- © All rights reserved ---------------\n";
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

    cout << "”вед≥ть x: "; cin >> x;
    cout << "”вед≥ть y: "; cin >> y;
    cout << "”вед≥ть z: "; cin >> z;
    cout << "”вед≥ть a: "; cin >> a;
    cout << "”вед≥ть b: "; cin >> b;

    cout << "\n–езультат лог≥чного виразу: " << getBoolResult(a, b) << endl;
    cout << "\nx (в дес€тков≥й): " << x << "\ny (в дес€тков≥й): " << y << "\nz (в дес€тков≥й): " << z << endl;
    cout << "\nx (в ш≥стнадц€тков≥й): " << getHexadecimal(x) << "\ny (в ш≥стнадц€тков≥й): " << getHexadecimal(y) << "\nz (в ш≥стнадц€тков≥й): " << getHexadecimal(z) << endl;

    cout << "\nS = " << s_calculation(x, y, z) << endl;

    return 0;
}
