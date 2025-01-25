#include <iostream>
using namespace std;

float perimeter(string value, float n);

int main()
{
    string shape;
    float num;
    cout << "Enter the s(s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> num;

    cout << "The perimeter is: " << perimeter(shape, num);
    return 0;
}

float perimeter(string value, float n)
{
    float result;
    if (value == "s")
    {
        result = 4 * n;
    }
    if (value == "c")
    {
        result = 6.28 * n;
    }
    if (value == "t")
    {
        result = 3 * n;
    }
    if (value == "h")
    {
        result = 6 * n;
    }
    return result;
}
