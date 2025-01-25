#include <iostream>
using namespace std;

bool areSameNumber(int x, int y, int z);

int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;

    cout << areSameNumber(num1, num2, num3);
    return 0;
}

bool areSameNumber(int x, int y, int z)
{
    if ((x == y) && (x == z) && (y == z))
    {
        return true;
    }
    else
    {
        return false;
    }
}