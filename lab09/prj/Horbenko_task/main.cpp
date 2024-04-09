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
        cout << "Введіть символ ('z', 'г', 's', 't', 'q' або 'Q'): ";
        cin >> input;

        switch (input) {
            case 'z':
                cout << "Введіть значення x, y та z через пробіл: ";
                cin >> x >> y >> z;
                cout << "Результат s_calculation: " << s_calculation(x, y, z) << endl;
                break;
            case 'r':
                cout << "Введіть швидкість торнадо: ";
                cin >> speed;
                cout << tornado_category(speed) << endl;
                break;
            case 's':
                cout << "Введіть шість температур через пробіл\n00:00, 04:00, 8:00, 12:00, 16:00, 20:00 год\n ";
                cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6;
                float* result;
                result = calculate_temp(temp1, temp2, temp3, temp4, temp5, temp6);
                cout << "Середня температура у Цельсіях: " << result[0] << endl;
                cout << "Середня температура у Фаренгейтах: " << result[1] << endl;
                break;
            case 't':
                unsigned int num;
                cout << "Введіть ціле число: ";
                cin >> num;
                cout << "Кількість нульових бітів у бінарному представленні числа: " << Bits(num) << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Вихід з програми." << endl;
                exit(0);
            default:
                cout << "Помилкове введення. Спробуйте ще раз." << endl;
                cout << '\a';
        }
    }
    getch();
    return 0;
}
