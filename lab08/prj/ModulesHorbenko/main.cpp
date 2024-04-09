#include <cmath>
#include <iostream>
#include <string>

//=======================LAB8.1=======================

float s_calculation (float x, float y, float z)
{
    if (x < 2)
    {
        std::cout << "'Nan' Помилка, значення X менше 2 " << std::endl;
        return 0;
    }else
    {
        return pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + (z / x);
    }
}

//=======================LAB9.1=======================

std::string tornado_category(int speed)
{
    std::string category;

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
