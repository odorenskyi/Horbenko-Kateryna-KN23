#include <iostream>
#include <string>
#include <conio.h>
#include "ModulesHorbenko.h"

using namespace std;

void testTornadoCategory(int test_num, int speed, const string& expected)
{
    string result = tornado_category(speed);

    cout << "=============Test_9.1==============" << endl;

    if (result == expected)
    {
        cout << "Test_" << test_num << "\tPassed" << endl;
        cout << "Result: " << result << endl;
    }
    else
    {
        cout << "Test_" << test_num << "\tFailed" << endl;
    }

}

void testCalculateTemp(int ts_num, float temp1, float temp2, float temp3, float temp4, float temp5, float temp6, float cel, float fahr)
{
    float *array = calculate_temp(temp1, temp2, temp3, temp4, temp5, temp6);

    cout << "=============Test_9.2==============" << endl;

    if (array[0] == cel || array[1] == fahr)
    {
        cout << "Test_" << ts_num << "\tPassed" << endl;
        cout << "Очікований результат:\n" << "Цельсія: " << cel << "\nФаренгейт: " << fahr << endl;

        cout << "\nРезультат функції:" << endl;
        cout << "Цельсія: " << array[0] << endl;
        cout << "Фаренгейт: " << array[1] << endl;
    }else
    {
        cout << "Test_" << ts_num << "\tFailed" << endl;
        cout << "Очікований результат:\n" << "Цельсія: " << cel << "\nФаренгейт: " << fahr << endl;

        float *array = calculate_temp(temp1, temp2, temp3, temp4, temp5, temp6);
        cout << "\nРезультат функції:" << endl;
        cout << "Цельсія: " << array[0] << endl;
        cout << "Фаренгейт: " << array[1] << endl;
    }
}

void testCountBits(int ts_num, unsigned int num, unsigned int expected)
{
    unsigned int result = Bits(num);

    cout << "=============Test_9.3==============" << endl;

    if (result == expected)
    {
        cout << "Test_" << ts_num << "\tPassed" << endl;
        cout << "Result: " << result << endl;

    } else
    {
        cout << "Test_" << ts_num << "\tFailed" << endl;

    }
}


int main()
{
    system("chcp 1251 & cls");

    //  tornado_category
    testTornadoCategory(1, 323, "Категорія торнадо: F3\nЧастота: 4,9%");
    testTornadoCategory(2, 404, "Категорія торнадо: F4\nЧастота: 1,1%");
    testTornadoCategory(3, 600, "Веденно не коректне значення. Ведіть число від 64 до 512");

    // calculate_temp
    testCalculateTemp(1, 10, 20, 30, 25, 20, 15, 20, 68);
    testCalculateTemp(2, -5, 0, 5, 10, 15, 20, 7.5, 45.5);
    testCalculateTemp(3, 12.5, 10.5, 18.7, 20.3, 25.6, 30.2, 19.6333, 67.34);

    // Bits
    testCountBits(1, 4096, 12);
    testCountBits(2, 12, 2);
    testCountBits(3, 65535, 16);

    getch();
}
