// Lab_03_3.cpp
// < Телих Олександра >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter x = ";
    cin >> x;

    if (x < -4)
        y = -2;
    else if (x <= 0)
        y = x / 4.0;
        if (x <= 2)
            y = pow(x, 2);
        else
            y = -x / 2.0 + 5;

    cout << "y = " << y << endl;

    return 0;
}