#include <iostream>
using namespace std;

bool greaterNumber(int x, int y);

int main()
{
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    int result = greaterNumber(num1, num2);
    cout << result;
    return 0;
}

bool greaterNumber(int x, int y)
{
    if (x > y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
