#include <iostream>
#include <iomanip>
#include <limits>
#include "ModulesHorbenko.h"

using namespace std;

void testSCalculation(float ts_num, float x, float y, float z, float expected)
{
    float result = s_calculation(x, y, z);

    if (result == expected)
    {
        cout << "Test_" << ts_num << "\tPassed" << endl;
        cout << "Result: " << result << endl;

    } else
    {
        cout << "Test_" << ts_num << "\tFailed" << endl;

    }
    cout << "==================================" << endl;
}

int main()
{
    system("chcp 1251 & cls");
    testSCalculation(1, 5, 2, 10, 10.929522514343262);
    testSCalculation(2, 12, 5, 8, -7.1314487457275391);
    testSCalculation(3, 1, 11, 10, numeric_limits < float > ::quiet_NaN());
    testSCalculation(4, 5, 2, 0, 8.9295225143432617);
    testSCalculation(5, 0, 10, 8, numeric_limits < float > ::quiet_NaN());
    testSCalculation(6, -5, -2, 10, numeric_limits < float > ::quiet_NaN());
    testSCalculation(7, 5, 2, -10, 6.9295225143432617);
    testSCalculation(8, 50, 15, 100, -2941.4345703125);
    testSCalculation(9, 10, 5, 10, -241.99583435058594);
    testSCalculation(10, 67, 3, 8, 0.0813121497631073);

    return 0;
}
