#include <iostream>
#include <cmath>
using namespace std;

int power(int x, int y);
float squareRoot(float num);
float absolute(float no);

int main()
{
    // power function
    int base, exp;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> exp;
    cout << base << " raised to the power " << exp << " = " << power(base, exp) << endl;

    // square root function
    int num;
    cout << "\nEnter number: ";
    cin >> num;
    cout << "Square root of " << num << " = " << squareRoot(num) << endl;

    // absolute value function
    float no;
    cout << "\nEnter a number: ";
    cin >> no;
    cout << "Absolute value of " << no << " = " << absolute(no);
    return 0;
}

int power(int x, int y)
{
    return pow(x, y);
}

float squareRoot(float a)
{
    return sqrt(a);
}

float absolute(float b)
{
    return fabs(b);
}
