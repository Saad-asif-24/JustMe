#include <iostream>
using namespace std;

int findGreatest(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        return y;
    }
}

int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;

    int result = findGreatest(num1, num2, num3);
    cout << "Greatest number is: " << result;
    return 0;
}
