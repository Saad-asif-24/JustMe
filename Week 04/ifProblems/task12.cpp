#include <iostream>
using namespace std;

float totalIncome(string s, int r, int c);

int main()
{
    string screening;
    int rows, columns;
    cout << "Enter the screening type(Premiere/Normal/Discount): ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << totalIncome(screening, rows, columns);
    return 0;
}

float totalIncome(string s, int r, int c)
{
    float income;
    if (s == "Premiere")
    {
        income = r * c * 12;
    }
    if (s == "Normal")
    {
        income = r * c * 7.5;
    }
    if (s == "Discount")
    {
        income = r * c * 5;
    }
    return income;
}