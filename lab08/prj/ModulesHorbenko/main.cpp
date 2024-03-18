#include <cmath>
#include <iostream>


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
