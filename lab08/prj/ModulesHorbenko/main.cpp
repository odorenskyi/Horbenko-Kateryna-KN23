#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

//=======================LAB8.1=======================

float s_calculation (float x, float y, float z)
{
    if (x < 2)
    {
        cout << "'Nan' Помилка, значення X менше 2 " << endl;
        return 0;
    }else
    {
        return pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + (z / x);
    }
}

//=======================LAB9.1=======================

string tornado_category(int speed)
{
    string category;

    if (speed >= 64 && speed <= 116) {
        category = "Категорія торнадо: FO\nЧастота: 38,9%";
    } else if (speed >= 117 && speed <= 180) {
        category = "Категорія торнадо: F1\nЧастота: 35,6%";
    } else if (speed >= 181 && speed <= 253) {
        category = "Категорія торнадо: F2\nЧастота: 19,4%";
    } else if (speed >= 254 && speed <= 332) {
        category = "Категорія торнадо: F3\nЧастота: 4,9%";
    } else if (speed >= 333 && speed <= 418) {
        category = "Категорія торнадо: F4\nЧастота: 1,1%";
    } else if (speed >= 419 && speed <= 512) {
        category = "Категорія торнадо: F5\nЧастота: менше 0,1%";
    } else {
        category = "Веденно не коректне значення. Ведіть число від 64 до 512";
    }

    return category;
}

//=======================LAB9.2=======================

float* calculate_temp(float temp1, float temp2, float temp3, float temp4, float temp5, float temp6)
{
    static float array[2];

    float sum = temp1 + temp2 + temp3 + temp4 + temp5 + temp6;

    float average_celsius = sum / 6;
    float average_fahrenheit = (average_celsius * 9 / 5) + 32;

    array[0] = average_celsius;
    array[1] = average_fahrenheit;

    return array;
}

//=======================LAB9.3=======================

unsigned int Bits(unsigned int num) {
    int count = 0;
    int first_bit = 1;

    while (first_bit <= num) {

        if ((num & first_bit) == 0) {
            count++;
        }

        first_bit <<= 1;
    }

    return (num >> 15) ? (16 - count) : count;
}

//=======================LAB10.1=======================

void processfile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    string content((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();

    int charCount = content.size();

    string words[] = {"програма", "модуль", "студент", "програміст"};
    bool wordFound[] = {false, false, false, false};

    for (int i = 0; i < 4; i++) {
        size_t pos = content.find(words[i]);
        while (pos != string::npos) {
            wordFound[i] = true;
            pos = content.find(words[i], pos + 1);
        }
    }

    outputFile << " ====================================" << endl;
    outputFile << "||Автор: Горбенко Катерина          ||" << endl;
    outputFile << "||Установа: Центральноукраїнський   ||" << endl;
    outputFile << "||національний технічний університет||" << endl;
    outputFile << "||Місто: Кропівницький              ||" << endl;
    outputFile << "||Країна: Україна                   ||" << endl;
    outputFile << "||Рік розробки: 2024                ||" << endl;
    outputFile << " ====================================" << endl;
    outputFile << "Кількість символів у вхідному файлі: " << charCount << endl;
    outputFile << "======================================" << endl;
    outputFile << "Результати перевірки на наявність слів:" << endl;

    for (int i = 0; i < 4; i++) {
        outputFile << words[i] << ": " << (wordFound[i] ? "Знайдено" : "Не знайдено") << endl;
    }

    outputFile << "======================================" << endl;
    outputFile.close();

    cout << "Операція завершена. Результати записані у вихідний файл." << endl;
}

//=======================LAB10.2=======================

void appendfileInfo(const string& filename) {

    ofstream file(filename, ios_base::app);

    time_t currentTime = time(nullptr);
    string dateTime = asctime(localtime(&currentTime));

    ifstream inputFile(filename);
    int digitCount = 0;
    char ch;
    while (inputFile.get(ch)) {
        if (isdigit(ch)) {
            digitCount++;
        }
    }

    file << "Кількість цифр: " << digitCount << "\n";
    file << "Дата та число: " << dateTime;
    file.close();
}

//=======================LAB10.3=======================

void binary(float x, float y, float z, unsigned int b, const string& outputFileName) {
    ofstream outputsFile(outputFileName, ios_base::app);

    outputsFile << "Результат функцій ModulesHorbenko.h:" << endl;
    outputsFile << "s_calculation(" << x << ", " << y << ", " << z << "): " << s_calculation(x, y, z) << endl;

    outputsFile << "Число у двійковому коді: " << b << ": ";
    for (int i = 31; i >= 0; i--) {
        unsigned int mask = 1 << i;
        outputsFile << ((b & mask) ? '1' : '0');
    }
    outputsFile << endl;

    outputsFile.close();
}

