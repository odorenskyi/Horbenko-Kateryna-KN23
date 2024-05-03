#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "ModulesHorbenko.h"

using namespace std;

void testprocessfile(int test_num, const string& inputFileName, const string& outputFileName)
{
    cout << "\nTest_" << test_num << endl;

    cout << "====================================" << endl;

    processfile(inputFileName, outputFileName); // Використання переданих значень

    cout << "Перевірити виконання того що тест-сьюта та результата програми, \nякщо воно сходиться натисніть 'y', якщо ні то іншу кнопку "<< endl;

    char button = getch();


    if (button == 'y')
    {
        cout << "Passed" << "\n====================================" << endl;
    }else
    {
        cout << "Failed" << "\n====================================" << endl;
    }

}

void testappendfileInfo(int test_num, const string& filename)
{
    cout << "\nTest_" << test_num << endl;

    cout << "====================================" << endl;

    appendfileInfo(filename);

    cout << "Перевірте зміст файлу з тест-сьютом, \nякщо воно сходиться натисніть 'y', якщо ні то іншу кнопку " << endl;

    char button = getch();

    if (button == 'y')
    {
        cout << "Passed" << "\n====================================" << endl;
    }else
    {
        cout << "Failed" << "\n====================================" << endl;
    }

}

void testbinary(int test_num, float x, float y, float z, unsigned int b, const string& outputFileName)
{
    cout << "\nTest_" << test_num << endl;

    cout << "====================================" << endl;

    binary(x, y, z, b, outputFileName);

    cout << "Перевірте зміст файлу з тест-сьютом, \nякщо воно сходиться натисніть 'y', якщо ні то іншу кнопку " << endl;

    char button = getch();

    if (button == 'y')
    {
        cout << "Passed" << "\n====================================" << endl;
    }
    else
    {
        cout << "Failed" << "\n====================================" << endl;
    }
}


int main(){
    system("chcp 1251 & cls");

    cout << "=============Test_10.1==============" << endl;

    testprocessfile(1, "input_1.txt", "output_1.txt");
    testprocessfile(2, "input_2.txt", "output_2.txt");
    testprocessfile(3, "input_3.txt", "output_3.txt");
    testprocessfile(4, "input_4.txt", "output_4.txt");
    testprocessfile(5, "input_5.txt", "output_5.txt");

    cout << "=============Test_10.2==============" << endl;

    testappendfileInfo(1, "input_1.txt");
    testappendfileInfo(2, "input_2.txt");
    testappendfileInfo(3, "input_3.txt");
    testappendfileInfo(4, "input_4.txt");
    testappendfileInfo(5, "input_5.txt");

    cout << "=============Test_10.3==============" << endl;

    testbinary(1, 5, 13, 1, 1, "binary_1.txt");
    testbinary(2, 5, 2, 0, 1567890, "binary_2.txt");
    testbinary(3, 10, 2, 5, 56, "binary_3.txt");
    testbinary(4, 50, 15, 100, 11, "binary_4.txt");
    testbinary(5, 3, 2, 5, 96, "binary_5.txt");

    return 0;
}
